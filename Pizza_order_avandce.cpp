//===================================================================================
// Pizza Palace Advanced Ordering System (v2.0)
// Feature:
//	- Customer Information
//	- Menu Ordering (with table)
//	- VAT Calculation
//	- Discount Codes
//	- Payment Method
//	- Receipt Printing
//	- Save Receipt to file
//	- Multiple Order Support
//===================================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

struct Customer {
	string name;
	string phone;
	string address;
};

int main() {
	const double PIZZA = 15.50,
				 SODA  = 2.00,
				 CHICKEN_NUGGETS = 7.00,
				 BREADSTICKS     = 9.75;

	double total = 0, VAT = 0, finalTotal = 0;
	double numItems = 0;
	char itemLetter;
	string discountCode;
	double discountAmount = 0;
	int qty;
	Customer c;

	cout << "====================================================================\n";
	cout << "\t\tWelcome to Pizza Palace\n";
	cout << "====================================================================\n\n";

	cout << "Enter Customer Name: ";	getline(cin, c.name);
	cout << "Enter Customer Phone: ";	getline(cin, c.phone);
	cout << "Enter Customer Address: ";	getline(cin, c.address);

	cout << fixed << setprecision(2);

	do {
		cout << "\n-------------------------------------------------------------\n";
		cout << left << setw(5) << "Code" << setw(20) << "Item" << setw(10) << "Price($)" << endl;
		cout << "-------------------------------------------------------------\n";
		cout << setw(5) << "A" << setw(20) << "Pizza" << setw(10) << PIZZA << endl;
		cout << setw(5) << "B" << setw(20) << "Soda" << setw(10) << SODA << endl;
		cout << setw(5) << "C" << setw(20) << "Chicken Nuggets" << setw(10) << CHICKEN_NUGGETS << endl;
		cout << setw(5) << "D" << setw(20) << "Breadsticks" << setw(10) << BREADSTICKS << endl;
		cout << setw(5) << "E" << setw(20) << "Finish Order" << endl;
		cout << "-------------------------------------------------------------\n";

		cout << "Enter item code: ";
		cin >> itemLetter;
		itemLetter = toupper(itemLetter);

		if (itemLetter == 'E') break;

		switch(itemLetter) {
			case 'A': cout << "Enter quantity for Pizza: "; cin >> qty; total += PIZZA * qty; numItems += qty; break;
			case 'B': cout << "Enter quantity for Soda: "; cin >> qty; total += SODA * qty; numItems += qty; break;
			case 'C': cout << "Enter quantity for Chicken Nuggets: "; cin >> qty; total += CHICKEN_NUGGETS * qty; numItems += qty; break;
			case 'D': cout << "Enter quantity for Breadsticks: "; cin >> qty; total += BREADSTICKS * qty; numItems += qty; break;
			default: cout << "Invalid option, try again.\n"; continue;
		}

		cout << "Current total: $" << total << endl;
	} while (itemLetter != 'E');

	cout << "\nEnter Discount Code (DISC10 / VIP50 / NONE): ";
	cin >> discountCode;

	if (discountCode == "DISC10")
		discountAmount = total * 0.10;
	else if (discountCode == "VIP50")
		discountAmount = total * 0.50;
	else
		discountAmount = 0;

	VAT = (total - discountAmount) * 0.10;
	finalTotal = total - discountAmount + VAT;

	cout << "\n-------------------------------------------------------------\n";
	cout << "Subtotal: $" << total << endl;
	cout << "Discount: -$" << discountAmount << endl;
	cout << "VAT (10%): $" << VAT << endl;
	cout << "Final Total: $" << finalTotal << endl;
	cout << "-------------------------------------------------------------\n";

	int method;
	double paid = 0, change = 0;

	cout << "\nPayment Method:\n"
		 << "1. Cash\n"
		 << "2. ABA\n"
		 << "3. Wing\n"
		 << "4. Credit Card\n"
		 << "Choose (1-4): ";
	cin >> method;

	if (method == 1) {
		cout << "Enter Cash Amount: $";
		cin >> paid;
		change = paid - finalTotal;
		cout << "Change: $" << change << endl;
	} else {
		cout << "Online payment selected.\n";
	}

	// ================= SAVE TO FILE ==================
	ofstream file("receipt.txt");
	file << "==================== PIZZA PALACE RECEIPT ====================\n";
	file << "Customer Name: " << c.name << endl;
	file << "Phone: " << c.phone << endl;
	file << "Address: " << c.address << endl;
	file << "--------------------------------------------------------------\n";
	file << "Items Ordered: " << numItems << endl;
	file << "Subtotal: $" << total << endl;
	file << "Discount: $" << discountAmount << endl;
	file << "VAT: $" << VAT << endl;
	file << "Final Total: $" << finalTotal << endl;
	file << "Payment Method: ";
	switch(method) {
		case 1: file << "Cash"; break;
		case 2: file << "ABA"; break;
		case 3: file << "Wing"; break;
		case 4: file << "Credit Card"; break;
		default: file << "Unknown";
	}
	file << endl;
	if (method == 1)
		file << "Paid: $" << paid << "\nChange: $" << change << endl;
	file << "--------------------------------------------------------------\n";
	file << "Thank you for ordering from Pizza Palace!\n";
	file.close();

	cout << "\nReceipt saved to 'receipt.txt' successfully!\n";
	cout << "Thank you for ordering! Enjoy your meal! ??\n";

	return 0;
}


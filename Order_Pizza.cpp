//******************************************************************************
// Pizza Palace Menu Order System:
// This program is a simple pizza ordering program
//  that will calculate the total cost of the order
//******************************************************************************

#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
	const double PIZZA = 15.50,
				 SODA = 2.00,
				 CHICKEN_NUGGETS = 7.00,
				 BREADSTICKS = 9.75;
	int numItems = 0;
	char itemLetter;
	double total = 0;
	
	int qtyPizza = 0, qtySoda = 0, qtyNuggets = 0, qtyBread = 0;
	double totalPizza = 0, totalSoda = 0, totalNuggets = 0, totalBread = 0;
	
	cout << "**********************************************************\n";
	cout << "\t\tWelcome to Pizza Palace\n";			 
   	cout << "**********************************************************\n";
	
	cout << fixed << setprecision(2);
	
	do {
		cout << "\n----------------------------------------------------------\n";
		cout << left << setw(20) << "Item" << setw(20) << "Code" << setw(10) << "Price($)" << endl;
		cout << "\n----------------------------------------------------------\n";
		cout << setw(20) << "Pizza" << setw(20) << "A" << setw(10) << PIZZA << endl;
		cout << setw(20) << "Soda" << setw(20) << "B" << setw(10) << SODA << endl;
		cout << setw(20) << "Chicken Nuggets" << setw(20) << "C" << setw(10) << CHICKEN_NUGGETS<< endl;
		cout << setw(20) << "Breadsticks" << setw(20) << "D" << setw(10) << BREADSTICKS<< endl;
		cout << setw(20) << "Exit" << setw(20) << "E" << endl;
		
		cout << "\nPlease enter the next menu item Letter(a/A): ";
		cin >> itemLetter;
		itemLetter = toupper(itemLetter);
		
		if (itemLetter == 'E') {
			break;
		}
		
		int quantity;
		cout << "Enter quantity: ";
		cin >> quantity;
		
		switch(itemLetter) {
			case 'A': 
				qtyPizza += quantity;
				totalPizza += PIZZA * quantity;
				total += PIZZA * quantity;
				numItems += quantity;
				break;
			case 'B': 
				qtySoda += quantity;
				totalSoda += SODA * quantity;
				total += SODA * quantity;
				numItems += quantity;
				break;
			case 'C': 
				qtyNuggets += quantity;
				totalNuggets += CHICKEN_NUGGETS * quantity;
				total += CHICKEN_NUGGETS * quantity;
				numItems += quantity;
				break;
			case 'D': 
				qtyBread += quantity;
				totalBread += BREADSTICKS * quantity;
				total += BREADSTICKS * quantity;
				numItems += quantity;
				break;
			default:
				cerr << "\nPlease pick a valid option\n";
				continue;
		} 
		
	
			cout << "\nAdded " << quantity << "items to your order.\n";
			cout << "\nCurrent total: $" << total << endl;;
			
	} while (itemLetter != 'E');
	cout << "\n\n------------------------ ORDER SUMMARY -----------------------\n";
	cout << left << setw(25) << "Item"
	     << setw(10) << "Qty"
	     << setw(10) << "Price($)"
	     << setw(10) << "Total($)" << endl;
	cout << "--------------------------------------------------------------\n";
	
	if (qtyPizza > 0)
	    cout << setw(25) << "Pizza" << setw(10) << qtyPizza << setw(10) << PIZZA << setw(10) << totalPizza << endl;
	
	if (qtySoda > 0)
	    cout << setw(25) << "Soda" << setw(10) << qtySoda << setw(10) << SODA << setw(10) << totalSoda << endl;
	
	if (qtyNuggets > 0)
	    cout << setw(25) << "Chicken Nuggets" << setw(10) << qtyNuggets << setw(10) << CHICKEN_NUGGETS << setw(10) << totalNuggets << endl;
	
	if (qtyBread > 0)
	    cout << setw(25) << "Breadsticks" << setw(10) << qtyBread << setw(10) << BREADSTICKS << setw(10) << totalBread << endl;
	
	cout << "---------------------------------------------------------------\n";
	cout << setw(25) << "TOTAL ITEMS:" << setw(10) << numItems << setw(10) << "TOTAL $" << total << endl;
	cout << "---------------------------------------------------------------\n";
	

	cout << "\nThank you for ordering! Enjoy!" << endl;
	
	return 0;
				 
}

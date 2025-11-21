//============================ Simple ATM Simulation =====================
/* 
1. Login System
2. Check Balance
3. Deposit Money
4. Withdraw Money 
5. Exit
*/

#include <iostream>
#include <string>
using namespace std;

string username = "LyZween";
string password = "123456789";

float balance = 100000;

bool login() {
	string user, pass;
	int attempts = 0;
	
	cout << "\n========= ATM Login ========\n";
	while (attempts < 3) {
		cout << "Enter username: "; cin >> user;
		cout << "Enter password: "; cin >> pass;
		
		if (user == username && pass == password) {
			cout << "\nLogin successfully!";
			return true;
		} else {
			cout << "Wrong username or password!\n";
			attempts++;
		}
	}
	cout << "\n Too many failed attempts! Access denied.\n";
	return false;
}

void checkBalance() {
	cout << "\n Your current balance: $" << balance << endl;
}

void depositMoney() {
	float amount;
	
	cout << "\nEnter amount to deposit: $"; cin >> amount;
	
	if (amount > 0) {
		balance += amount;
		
		cout << "Deposited $" << amount << " Successfully!\n";
		cout << "New Balance: $" << balance << endl;
	} else {
		cout << "Invalid deposit amount!\n";
	}
}

void withdrawMoney() {
	float amount;
	
	cout << "\nEnter amount to withdraw: $"; cin >> amount;
	
	if (amount <= 0) {
		cout << "Invalid amount!\n";
	} else if (amount > balance) {
		cout <<  "Insufficient balance!\n";
	} else {
		balance -= amount;
		cout << "Withdraw of $" << amount << " Successfully!\n";
		cout << "Remaining balance $" << balance << endl;
	}
}

int main () {
	if(!login()) return 0;
	
	int choice;
	do {
		cout << "\n===================== ATM MENU =============\n";
		cout << "1. Check Balance\n";
		cout << "2. Deposit Money\n";
		cout << "3. Withdraw Money\n";
		cout << "4. Exit\n";
		
		cout << "Choose an option: "; cin >> choice;
		
		switch (choice) {
			case 1: checkBalance(); break;
			case 2: depositMoney(); break;
			case 3: withdrawMoney(); break;
			case 4: cout << "GOOD LUCK!"; break;
			default: cout << "Invalid choice\n";
		}
	} while (choice != 4);
	
	return 0;
}

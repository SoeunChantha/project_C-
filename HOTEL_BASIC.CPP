//========================== HOTEL MANAGEMENT SYSTEM ==================
/*
1. Check-in(Add Guest)
2. Check-Out (Remove Guest)
3. Display Geust List
4. Exit
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Guest{
	int roomNnmber;
	string name;
	int days;
	float pricePerDay;
	float total;
};

Guest hotel[100];
int guestCount = 0;

void check_in() {
	cout << "Enter Room Number: ";
	cin >> hotel[guestCount].roomNnmber;

	cout << "Enter Guest Name: ";
	cin.ignore();
	getline(cin, hotel[guestCount].name);

	cout << "Enter Number of Days: ";
	cin >> hotel[guestCount].days;

	cout << "Enter Price Per Day: $";
	cin >> hotel[guestCount].pricePerDay;

	hotel[guestCount].total =
	 hotel[guestCount].days * hotel[guestCount].pricePerDay;
	guestCount++;

	cout << "Guest checked in successfully!\n";
}

void check_out() {
	int room;
	cout << "\n======================CHECK-OUT==============\n";
	cout << "Enter Room Number: ";
	cin >> room;
	
	bool found = false;
	
	for(int i = 0; i < guestCount; i++) {
		if (hotel[i].roomNnmber == room) {
			found = true;
			for (int j = i; j < guestCount -1; j++) {
				hotel[j] = hotel[j + 1];
			}
			guestCount--;
			cout << "\nGuest Check Out Successfully\n";
			break;
		}
	}
	if(!found) cout << "\nRoom not found\n";
}
void displayGuest() {
	cout << "\n====================== DISPLAY GUEST LIST ==============\n";
	if (guestCount == 0) {
		cout << "No guest checked in yet.\n";
		return;
	}

	cout << left << setw(10) << "Room"
		 << setw(20) << "Name"
		 << setw(10) << "Days"
		 << setw(15) << "Price Per day"
		 << setw(15) << "Total" << endl;
	cout << string(70, '-') << endl;

	for (int i = 0; i <guestCount; i++){
		cout << left << setw(10) << hotel[i].roomNnmber
			 << setw(20) << hotel[i].name
			 << setw(10) << hotel[i].days
			 << setw(15) << hotel[i].pricePerDay
			 << setw(15) << hotel[i].total
			 << endl;
	}
}

int main() {
	int choice;
	
	do{
	cout << "\n================= HOTEL MANAGEMENT SYSTEM ==============\n";
	cout << "1. CHECK-IN \n";
	cout << "2. CHECK-OUT \n";
	cout << "3. DISPLAY \n";
	cout << "4. EXIT \n";
	cout << "Choose an option: "; cin >> choice;
	
	switch(choice) {
		case 1: check_in(); break;
		case 2: check_out(); break;
		case 3: displayGuest(); break;
		case 4: cout << "Bye Bye!\n"; break;
		default: cout << "Invalid choice! Try again.\n";
		}
	}while( choice != 4);
	return 0;
}

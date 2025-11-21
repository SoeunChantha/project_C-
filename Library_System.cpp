//#include <iostream>
//#include <iomanip>
//#include <string>
//using namespace std;
//struct Book {
//	int id;
//	string title;
//	string author;
//	float price;
//};
//
//Book books[100];
//int countBooks = 0;
//
//void addBook() {
//	cout << "\n============== Add New Book ===========\n";
//	cout << "Enter ID Book: ";	cin >> books[countBooks].id; cin.ignore();
//	cout << "Enter Title Book: ";	getline(cin, books[countBooks].title);
//	cout << "Enter Author Book: ";	getline(cin, books[countBooks].author);
//	cout << "Enter Price Book: "; cin >> books[countBooks].price;
//	countBooks++;
//	cout << "Book added successfully!\n";
//}
//
//void displayBooks() {
//	if (countBooks == 0) {
//		cout << "No books available.\n";
//		return;
//	}
//	for (int i = 0; i < countBooks; i++) {
//		cout << "\nBook ID: " 		<< books[i].id;
//		cout << "\nBook Title: " 	<< books[i].title;
//		cout << "\nBook Author: " 	<< books[i].author;
//		cout << "\nBook Price: " 	<< books[i].price;
//	}
//}
//
//void searchBook() {
//	int id;
//	cout << "\nEnter Book ID to search: "; cin >> id;
//	bool found = false;
//	for (int i = 0; i < countBooks; i++) {
//		if (books[i].id == id) {
//			cout << "\n===== Book found!======\n";
//			cout << "Title: " << books[i].title << endl;
//			cout << "Author: " << books[i].author << endl;
//			cout << "Price: " << books[i].price << endl;
//			found = true;
//			break;
//		}
//	}
//	if (!found) cout << "Book not found!\n";
//}
//
//void editBook() {
//	int id;
//	cout << "\nEnter Book ID to edit: "; cin >> id;
//	bool found = false;
//	for (int i = 0; i < countBooks; i++) {
//		if (books[i].id = id) {
//			cin.ignore();
//			cout << "Enter new Title: "; getline(cin, books[i].title);
//			cout << "Enter new Author: "; getline(cin, books[i].author);
//			cout << "Enter new Price: "; cin >> books[i].price;
//			cout << "Book updated successfully!\n";
//			found = true;
//			break;
//		}
//	}
//	if (!found) cout << "Book not found!\n";
//}
//
//void deleteBook() {
//	int id;
//	cout << "Enter Book ID to delete: "; cin >> id;
//	bool found = false;
//	for (int i = 0; i < countBooks; i++) {
//		if (books[i].id == id) {
//			for (int j = i; j < countBooks - 1; j++) {
//				books[j] = books[j + 1];
//			}
//			countBooks--;
//			cout << "BOOK DELETED SUCCESSFULLY!\n";
//			found = true;
//			break;
//		}
//	}
//	if (!found) cout << "Book not found!\n";
//}
//
//int main() {
//	int choice;
//	do { 
//		cout << "\n====================== LIBRARY SYSTEM MENU =====================";
//		cout << "\n1. Add Book";
//		cout << "\n2. Display All Books";
//		cout << "\n3. Search Book";
//		cout << "\n4. Edit Book";
//		cout << "\n5. Delete Book";
//		cout << "\n6. Exit";
//		cout << "\nChoose an option: "; cin >> choice;
//		
//		switch(choice) {
//			case 1: addBook(); break;
//			case 2: displayBooks(); break;
//			case 3: searchBook(); break;
//			case 4: editBook(); break;
//			case 5: deleteBook(); break;
//			case 6: cout << "Exit\n"; break;
//			default: cout << "Invalid choice\n";
//		}
//	}while (choice != 6);
//	return 0;
//}

//======================================= Library.txt ===========================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Books {
	int id;
	string title;
	string author;
	float price;
};

Books books[100];
int countBook = 0;

void addBook() {
	cout << "\n=================================== ADD BOOK ===========================\n";
	cout << "1. Enter Book ID: ";
	cin >> books[countBook].id;
	cout << "2. Enter Book Title: ";
	getline(cin, books[countBook].title);
	cout << "3. Enter Book Author: ";
	getline(cin, books[countBook].author);
	cout << "4. Enter Book Price: ";
	cin >> books[countBook].price;
}
void displayBooks() {
	cout << "\n=================================== DIPLAY BOOKS ===========================\n";
	cout << "Book ID: \n"; cin >> books[countBook].id;
}

int main() {
	
	return 0;
}


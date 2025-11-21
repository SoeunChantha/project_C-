////Shop Management System
////Features include:
////	- Product catalog with "new arrival" and "featured" flags
////	- Stock namagement and low-stock alerts
////	- Customer info capture
////	- Add to cart, multiple items per order
////	- Discounts (promo codes + bulk discount)
////	- VAT calculation
////	- Receipt saving to file
////	- Sales record (Simple daily sales report in-memory + file apped)	
	
	#include <iostream>
	#include <string>
	#include <iomanip>
	#include <fstream>
	#include <vector>
	#include <ctime>
	
	using namespace std;
	
	struct Product {
		int id;
		string name;
		double price;
		int stock;
		bool isNew;
		bool featured;
	};
	
	struct Customer {
		string name;
		string phone;
		string address;
	};
	
	struct OrderItem {
		int productId;
		string productName;
		double unitPrice;
		int quantity;
		double lineTotal() const { return unitPrice * qauntity;}	
	};
	
	vector<Product> products;
	vector<pair<time_t,double>> salesRecords;
	
	void seedProducts() {
		products.push_back({1, "Khmer Pizza", 12.50, 100, true, true});
		products.push_back({2, "Soda", 2, 10, false, false});
		products.push_back({3, "Chicken Nuggets", 6.78, 100, false, false});
		products.push_back({4, "Breadsticks", 2.50, 100, false, false});
		products.push_back({5, "Khmer Baycha", 2.50, 100, false, true});
	}
	
	void showHeader() {
		cout << "============================================================\n";
		cout << "				SHOP KHMER MANAGEMENT SYSTEM			   	\n";
		cout << "============================================================\n";
	}
	
	void listProducts()
	

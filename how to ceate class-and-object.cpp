#include <iostream>
using namespace std;
class Student{
	public: 
		int age;
		string name;
		float score;
//		function
	void input() {
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Age: ";
		cin >> age;
		cout << "Enter Scroe: ";
		cin >> score;
	}
	void output() {
		cout << "Student Name: " << name << endl;
		cout << "Student Age: " << age << endl;
		cout << "Student Score: " << score << endl;
	}
};
	int main() {
//		Object
		Student st1;
		st1.input();
		st1.output();
	}

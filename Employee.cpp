#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
using namespace std;

class Employee {
	char name[20];	int id;	float salary;
	public: 
//	constructor default
	Employee () {
		strcpy (name, " "); id = 0; salary = 0;
	}
//	constructor with parameters
	Employee ( const char* N, int I, float S) {
		strcpy (name, N); id = I; salary = S;
	}
	void input() {
		cout << "Enter employee name: "; cin >> name;
		cout << "Enter employee id: "; cin >> id;
		cout << "Enter employee salary: "; cin >> salary;
	}
	void output() {
		cout << "\tName: " << name
			 << "\tID: "	 << id
			 << "\tSalary: " << salary << endl;
	}
	int getID() {
		return id;
	}
	void setSalary(float s) {salary = s;}
};

//==============================
//Write data to file
//==============================
void writefile() {
	Employee E;
	int m;
	
	ofstream f("Employee.dat", ios::binary);
	if (f.fail()) {
		cout << "File cannot open for writing!" << endl;
		getch();
		return;
	}
	cout << "Enter number of employees: "; cin >> m;
	
	for (int i = 0; i < m; i++) {
		cout << "\n ----Employee " << i+1 << "---\n";
		E.input();
//		write data to file
		f.write((char*)&E, sizeof(Employee));
	}
	f.close();
	cout << "\n Data successfully written to Employee.dat\n";
	getch();
}

//==============================
//Read data from file
//==============================
void readfile() {
	Employee E;
	ifstream f("Employee.dat", ios::binary);
	if (f.fail()) {
		cout << "File cannot open for reading!" << endl;
		getch();
		return;
	}
	cout << "-----Employee Data -------\n";
	while (f.read((char*)&E, sizeof(Employee))) {
		E.output();
	}
	f.close();
	getch();
}


//=================================
//Search Employee by ID
//=================================
void searchEmployee(int id) {
	Employee E;
	ifstream f("Employee.dat", ios::binary);
	bool found = false;
	while(f.read((char*)&E, sizeof(Employee))) {
		if(E.getID() == id) {
			cout << "Employee found: \n";
			E.output();
			found = true;
			break;
		}
	}
	if (!found) cout << "Employee not found!\n";
	f.close();
	
}


//=================================
// Edite Salary
//=================================
void updateSalary(int id, float newSalary) {
    Employee E;
    fstream f("Employee.dat", ios::in | ios::out | ios::binary);
    while (f.read((char*)&E, sizeof(Employee))) {
        if (E.getID() == id) {
            E.setSalary(newSalary);
            int pos = f.tellg() - sizeof(Employee);
            f.seekp(pos);
            f.write((char*)&E, sizeof(Employee));
            cout << "Salary Updated!\n";
            break;
        }
    }
    f.close();

	
}

//======================================
// Delete Employee
//======================================
void deleteEmployee(int id) {
	Employee E;
	ifstream fin("Employee.dat",ios::binary);
	ofstream fout("temp.dat", ios::binary);
	
	while(fin.read((char*)&E, sizeof(Employee))) {
		if(E.getID() != id)
		 fout.write((char*)&E, sizeof(Employee));
	}
	fin.close();
	fout.close();
	remove("Employee.dat");
	rename("temp.dat","Employee.dat");
	cout << "Employee Deleted!\n";
}


//===============================
//Main Program
//===============================
int main () {
	int choice;
	do {
		system ("cls");
		cout << "=======Employee File Program========\n";
		cout << "1. Write Data to File\n";
		cout << "2. Read Data from File\n";
		cout << "3. Search Employee By Id\n";
		cout << "4. Udate newSalary\n";
		cout << "5.Employee Delete\n";
		cout << "6. Exit\n";
		cin >> choice;
		
		switch(choice) {
			case 1: writefile(); break;
			case 2: readfile(); break;
			
			case 3: int id; 
				cout << "Enter Employee ID to search: "; cin >> id;
				searchEmployee(id);
				getch();
				break;
				
			case 4: {
				int id; float s;
				cout << "Enter employee ID to Udate: "; cin >> id;
				cout << "Enter new salary: "; cin >> s;
				updateSalary(id, s);
				getch();
			 	break;
			 }
			 	
			case 5: {
				int id;
				cout << "Enter employee ID to delete: "; cin >> id;
			 	deleteEmployee(id);
			 	getch();
				break;
			}
			case 6: cout << "Goodbye!\n"; break;
			defualt: cout << "Invalid  choice!\n";
			getch();
		} 
	} while (choice != 6);
	return 0;
}

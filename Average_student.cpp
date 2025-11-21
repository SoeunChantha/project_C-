//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Student {
//	string name;
//	string id;
//	string major;
//	string school;
//	string batch;
//	int age;
//};
//
//float calculateAverage(Student s[], int count) {
//	int total = 0;
//	for (int i = 0; i < count; i++) {
//		total += s[i].age;
//	}
//	return (float)total / count;
//};
//int main() {
//	int numberStudents;
//	cout << "Enter number of Students: ";
//	cin >> numberStudents;
//	cin.ignore();
//	
//	Student s[numberStudents];
//	cout << "\n=============== Enter Student Info ===============\n";
//	for (int i=0; i < numberStudents; i++) {
//		cout << "\nStudent " << i+1 << ":\n";
//		getline(cin, s[i].name);
//		cout << "Full Name: "; getline(cin, s[i].name);
//		cout << "ID: "; getline(cin, s[i].id);
//		cout << "Major: "; getline(cin, s[i].major);
//		cout << "School: "; getline(cin, s[i].school);
//		cout << "Batch: "; getline(cin, s[i].batch);
//		cout << "Age: "; cin >> s[i].age;
//		
//		while (s[i].age <= 0 || s[i].age > 120) {
//			cout << "Invalid age! Enter again: ";
//			cin >> s[i].age;
//		}
//		cin.ignore();
//	}
//	
//	float avg = calculateAverage(s,numberStudents);
//	
//	cout << "\n============== STUDENT LIST================\n";
//	for (int i=0; i<numberStudents; i++) {
//		cout << "Student " << i+1 << " Information: \n";
//		cout << "Name: " << s[i].name <<endl;
//		cout << "ID: " << s[i].id <<endl;
//		cout << "Major: " << s[i].major <<endl;
//		cout << "School: " << s[i].school <<endl;
//		cout << "Batch: " << s[i].batch <<endl;
//		cout << "Age: " << s[i].age <<endl;
//	}
//	
//	cout << "\n========================================\n";
//	cout << "Average age of Student " << avg << endl;
//	cout << "\n========================================\n";
//	
//	return 0;
//}																							

//==================== VERSION MENU ===================
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student {
    string name;
    string id;
    string school;
    string batch;
    string major;
    int age;
};

Student s[100];
int countStudent = 0;

void inputStudent();
void outputStudent();
float averageAge();
void editStudent();
void searchStudent();
void sortStudent();

int main() {
    int choice;
    do {
        cout << "\n==================== STUDENT MANAGEMENT SYSTEM ==================\n";
        cout << "1. Input Student Data\n";
        cout << "2. Output All Students\n";
        cout << "3. Average Age\n";
        cout << "4. Edit Student Info\n";
        cout << "5. Search Student\n";
        cout << "6. Sort Student By Name\n";
        cout << "7. Exit\n";
        cout << "=================================================================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: inputStudent(); break;
            case 2: outputStudent(); break;
            case 3: averageAge(); break;
            case 4: editStudent(); break;
            case 5: searchStudent(); break;
            case 6: sortStudent(); break;
            case 7: cout << "Exiting Student Management System, GOOD BYE!\n"; break;
            default: cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 7);
    return 0;
}

void inputStudent() {
    int numberStudents;
    cout << "\nHow many students you want to add? ";
    cin >> numberStudents;
    cin.ignore();

    for (int i = 0; i < numberStudents; i++) {
        cout << "Student " << countStudent + 1 << ":\n";
        cout << "Name: ";
        getline(cin, s[countStudent].name);
        cout << "Student ID: ";
        getline(cin, s[countStudent].id);
        cout << "Major: ";
        getline(cin, s[countStudent].major);
        cout << "School: ";
        getline(cin, s[countStudent].school);
        cout << "Batch: ";
        getline(cin, s[countStudent].batch);
        cout << "Age: ";
        cin >> s[countStudent].age;
        cin.ignore();
        countStudent++;
    }
    cout << "\nStudents added successfully!\n";
}

void outputStudent() {
    if (countStudent == 0) {
        cout << "\nNo student data available.\n";
        return;
    }
    cout << "\n==================== STUDENT LIST ========================\n";
    cout << left << setw(5) << "No"
         << setw(20) << "Name"
         << setw(10) << "ID"
         << setw(15) << "School"
         << setw(15) << "Major"
         << setw(10) << "Batch"
         << setw(5) << "Age" << endl;
    cout << "==============================================================\n";

    for (int i = 0; i < countStudent; i++) {
        cout << left << setw(5) << i + 1
             << setw(20) << s[i].name
             << setw(10) << s[i].id
             << setw(15) << s[i].school
             << setw(15) << s[i].major
             << setw(10) << s[i].batch
             << setw(5) << s[i].age << endl;
    }
}

float averageAge() {
    if (countStudent == 0) {
        cout << "No data to calculate average.\n";
        return 0;
    }
    float sum = 0;
    for (int i = 0; i < countStudent; i++) sum += s[i].age;
    float avg = sum / countStudent;
    cout << "Average age of students: " << avg << endl;
    return avg;
}

void editStudent() {
    string id;
    cout << "Enter Student ID to edit: ";
    getline(cin, id);

    for (int i = 0; i < countStudent; i++) {
        if (s[i].id == id) {
            cout << "\nEditing student: " << s[i].name << endl;
            cout << "New Name: ";
            getline(cin, s[i].name);
            cout << "New School: ";
            getline(cin, s[i].school);
            cout << "New Major: ";
            getline(cin, s[i].major);
            cout << "New Batch: ";
            getline(cin, s[i].batch);
            cout << "New Age: ";
            cin >> s[i].age;
            cin.ignore();
            cout << "Student info updated successfully!\n";
            return;
        }
    }
    cout << "Student ID not found!\n";
}

void searchStudent() {
    string keyword;
    cout << "Enter name or ID to search: ";
    getline(cin, keyword);

    bool found = false;
    for (int i = 0; i < countStudent; i++) {
        if (s[i].name == keyword || s[i].id == keyword) {
            cout << "\nFound Student:\n";
            cout << "Name: " << s[i].name << endl;
            cout << "ID: " << s[i].id << endl;
            cout << "School: " << s[i].school << endl;
            cout << "Major: " << s[i].major << endl;
            cout << "Batch: " << s[i].batch << endl;
            cout << "Age: " << s[i].age << endl;
            found = true;
        }
    }
    if (!found)
        cout << "No student found.\n";
}

void sortStudent() {
    if (countStudent < 2) {
        cout << "Not enough data to sort.\n";
        return;
    }
    for (int i = 0; i < countStudent - 1; i++) {
        for (int j = i + 1; j < countStudent; j++) {
            if (s[i].name > s[j].name) {
                swap(s[i], s[j]);
            }
        }
    }
    cout << "Students sorted by name successfully!\n";
}


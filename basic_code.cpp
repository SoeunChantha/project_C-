//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string name;
//	int age;
//	string address;
//	
//	cout << "What is your name? \n";
//	getline (cin, name);
//	
//	cout << "How old are you? \n";
//	cin >> age;
//	cin.ignore();
//	
//	cout << "Where you from? \n";
//	getline(cin, address);
//	
//	cout << "====================Your Data========================" << endl;
//	cout << "Your name is: " << name << endl;
//	cout << "Your age is: " << age << endl;
//	cout << "Your address is: " << address << endl;
//	cout << "=====================================================" << endl;
//	
//	return 0;
//}

//=============================================
// Level 01 Basic
//=============================================

//#include <string>
//#include <iostream>
//using namespace std;
//int main() {
//
//string name;
//int age;
//string coutry;
//cout << "Your name: ";
//getline(cin, name);
//cout << "Your Age: ";
//cin >> age;
//cin.ignore();
//cout << "Your coutry: ";
//cin >> coutry;
//
//cout << "========================= Your Data ===================\n" << endl;
//cout << "Hello " << name <<"," << "Age " << age << " old." << endl;
//cout << "Coutry " << coutry << endl;
//cout << "Charactor " << name.length() << " charactors" << endl;
//cout << "========================================================" << endl;
//
//return 0;
//}

//============================================
// iomanip
//============================================
//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//int main() {
//	cout << left << setw(15) << "Name: "
//		 << setw(10) << "Age: "
//		 << setw(10) << "Scores: " << endl;
//	cout << setfill('-') << setw(35) << "-" << endl;
//	cout << setfill(' ');	
//	
//	cout << left << setw(15) << "Chantha Soeun "
//		 << setw(10) << 20
//		 << setw(10) << 99.95 << endl;
//	
//	return 0;
//}

//======================================================================
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//	float score;
//	cout << "Enter your score: "; //95.456692843392....
//	cin >> score;
//	cout << fixed << setprecision(2);
//	cout <<  "Your scores: " << score << endl;
//	
//	return 0;
//}

//====================================================================
// Level 02
//====================================================================
//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//int main() {
//	string name;	int age;	string university;
//	
//	cout << left << setw(15) << "Name"
//		 << setw(10) << "Age"
//		 << setw(10) << "University" << endl;
//	cout << setfill('-') <<setw(55) << "-" << endl;
//	cout << setfill(' ');
//	
//	cout << left << setw(15) << "Souen Chantha"
//		 << setw(10) << 23
//		 << setw(10) << "Royal University of Phnom Phen" << endl;
//	cout << left << setw(15) << "Mon Chailim"
//		 << setw(10) << 17
//		 << setw(10) << "Salakrhaom" << endl;
//	
//	return 0;
//} 

//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//int main() {
//	string name [3];
//	int age[3];
//	
//	cout << "================= Enter 3 person ==============\n" << endl;
//	for (int i = 0; i < 3; i++) {
//		cout << "Person" << i+ 1 << ":\n";
//		cout << "Name: ";
//		getline(cin, name[i]);
//		cout << "Age:";
//		cin >> age[i];
//		cin.ignore();
//		cout << endl;
//	}
//	cout << "\n===================== List Person======================\n";
//	for (int i = 0; i < 3; i++) {
//		cout << i+ 1 << ". Name:" << name[i] << " -Age: " << age[i] << " old\n";
//	}
//	cout << "=========================================================\n";
//		
//	return 0;
//	}
	

//#include <iostream>
//using namespace std;
//
//int main() {
//	int age[3];
//	int sum = 0;
//	float average;
//	for (int i = 0; i < 3; i++) {
//		cout << "Student" << i +1 << ":\n";
//		cout << "Age: ";
//		cin >> age[i];	
//		sum += age[i];
//	}
//		average = sum/3.0;
//
//	
//
//	
//	cout << "============ OUTPUT ==============" << endl;
//	for (int i=0; i<3; i++) {
//	 	cout << "Age: " << "Years" << age[i] << endl;	
//	}
//	cout << "=========== CACULATOR AVERAGE ============" << endl;
//	cout << "Student Average: " << average << "Years" << endl;
//
//	return 0;
//}
 
//=======================================Add fillter find old ===================
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string nameStudents;
//	int numberStudents;
//	float sum, average;
//	int maxAge, minAge;
//	
//	
//	cout << "Enter Number of students: "; cin >> numberStudents;
//	
//	int age[numberStudents];
//	
//	for (int i=0; i< numberStudents; i++) {
//		cout << "Name" << i+1 << ": "; cin >> nameStudents;
//		cout << "Student " << i+1 << " Age: "; cin >> age[i];
//		sum += age[i];
//		
//		if (i==0) {
//			maxAge = age[i];
//			minAge = age[i];
//		} else {
//			if (age[i] > maxAge) 
//			maxAge = age[i];
//			if (age[i] < minAge)
//			minAge = age[i];
//		}
//	}
//	average = sum / numberStudents;
//	
//	cout << "==========OUTPUT==============" << endl;
//	for(int i=0; i<numberStudents; i++) {
//		cout << "Name " << i+1 <<":"<<nameStudents << endl; 
//		cout << "Student " << i+1 << " Age: " << age[i] << " Year\n" << endl;
//	}
//	cout << "\n";
//	cout << "Average: " << average << " Year\n" << endl;
//	cout << "maxAge: " << maxAge << " Year" << endl;
//	cout << "minAge: " << minAge << " Year" << endl;
//	
//	return 0;
//}

//===========************ FUNCTION **********=================




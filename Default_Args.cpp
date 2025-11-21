//*****************************************************************************
// This program demonstrates the use of default arguments in a function
//******************************************************************************

#include <iostream>
using namespace std;

void displayMsg(
	const char msg[] = "Decide. Commit. Succeed.",
 	char symbol = ' ',
 	int num = 10);
 	
 	int main() {
 		displayMsg (" I will decide.", '*', 14);
 		displayMsg (" I will commit.", '+', 14);
 		displayMsg (" I will succeed.", '=', 14);
 		displayMsg ();
 		return 0;
	 }
void displayMs(
	const char msg[],
	char symbol,
	int num
) {
	for (int i = 0; i < num; ++i)
		cout << symbol;
	cout << msg;
	
	for (int i = 0; i < num; ++i)
		cout << symbol;
	cout << endl;
}

//===================================================
//Exercise of n!
//===================================================
#include <iostream>
using namespace std;
long long factorial_recursive (int n) {
	if (n<0) return -1;
	if (n==0 || n==1) {
		return 1; //Base case
	} else {
		return (long long) n*factorial_recursive(n-1);
	}
}
int main() {
	int num = 5;
	cout << "Factorial of " << num << " is: " << factorial_recursive(num) << endl;
	return 0;
}

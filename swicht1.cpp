//#1
/*
#include <stdio.h>
int main() {
//	Local variable definition
	char grade = 'E';
	
	switch (grade){
		case 'A': printf ( "Execellent! \n");
		break;
		case 'B': printf ( "Good job! \n");
		break;
		case 'C': printf ( "Well done! \n");
		break;
		case 'D': printf ( "You passed! \n");
		break;
		case 'E': printf ( "Congratulation! \n");
		break;
		case 'F': printf ( "Better try again! \n");
		break;
		default: printf ( "Invalid grade. Note you must input capital letters \n");
		 
	}
	printf ( "*****************************\n");
	printf ( "Your grade is %c \n", grade);
	return 0;
}
*/

//#2 $0-$9,999 got class1 2% and class2 2.5% but $10,000 Up class1 4% and class2 5%.
#include <stdio.h>
int main() {
		int SalesClass;
		float SalesTotal, commisionRate;
		printf ( " $0-$9,999 and $10,000 Up");
		printf ( "Enter sales total (in $) of a sale representative: ");
		scanf ( "%f", &SalesTotal);
		printf ( "Enter a value of sale class (1 or 2): ");
		scanf ( "%d", &SalesClass);
		
		switch(SalesClass) {
			case 1: 
				if (SalesTotal < 10,000.0)	commisionRate = 0.2;	
				else commisionRate = 2.5;
				break;
			case 2:
				if (SalesTotal < 10,000.0) commisionRate = 0.04;	
				else commisionRate = 0.05; 
				break;
			default: printf ( "Invalid Sales Class");
			
			return 0;
		}
		printf ( "Commision Rate is %.3f\n", commisionRate);
		printf ( "Add he/she got bonus %.2f$\n", (commisionRate*SalesTotal));
		return 0;
}


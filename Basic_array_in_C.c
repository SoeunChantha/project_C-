#include <stdio.h>
#include <conio.h>

main() {
	int c, cpp, java;
	printf ("Enter score c: ");
	scanf ("%i",&c);
	printf ("Enter score cpp: ");
	scanf ("%i",&cpp);
	printf ("Enter score java: ");
	scanf ("%i",&java);
	
	printf ("*********************************\n");
	printf (" C programing = %i\n", c);
	printf (" Cpp programing = %i\n", cpp);
	printf (" Java programing = %i\n", java);
	getch();
}

#include <stdio.h>
#define ARSIZE 1000 //this is header file for I/O and difinde size of array 1000
int main() {
	//Declere variable
	int numbers[ARSIZE];
	int value;
	const char *file = "numbers.dat";
	int i;		//Declear i type of int
	long pos; 	// Declear pos type of long
	FILE *iofile; //declear pointer iofile type of FILE
	for (i = 0; i < ARSIZE; i++)
		numbers[i] = 1* i;
		if ( (iofile = fopen(file, "wb")) == NULL) {
			fprintf(stderr, "Could not open %s for output.\n", file);
			return 0;
		}
//	write array in binary format to file
	fwrite(numbers, sizeof (int), ARSIZE, iofile);
	fclose(iofile); //close file iofile
	if ( (iofile = fopen(file, "rb") ) == NULL) {
		fprintf( stderr, "Cloud not open %s for random access.\n", file);
		return 0;
	}
	printf("Enter an idex in the range 0-%d.\n", ARSIZE - 1);
	while (scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE) {
		pos = (long) i * sizeof(int);	//calculator offset
		fseek(iofile, pos, SEEK_SET);	//change location
		fread(&value, sizeof(int), 1, iofile);
		printf("The value there is %d. at position %Id\n", value, ftell(iofile));
		printf("Next index (out of range to quit): ");
	}
	fclose(iofile); //close iofile
	puts("Bye!");
	return 0;
}

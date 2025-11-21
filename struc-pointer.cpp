#include <stdio.h>
#include <string.h>
struct Books{
	char title[50],author[50], subject[50];
	int book_id;	
};
void printBook(struct Books *book);
int main() {
	struct Books Book1;
	struct Books Book2;
	
	strcpy ( Book1.title, "C programming for Beginner" );
	strcpy ( Book1.author, "Chantha Soeun" );
	strcpy ( Book1.subject, "Programming Language" );
	Book1.book_id = 12345678;
	
	strcpy (Book2.title, "Java Programming Language" );
	strcpy (Book2.author, "Chantha Soeun");
	strcpy (Book2.subject, "Programming Language");
	Book2.book_id = 24681012;
	
	printBook (&Book1);
	printBook (&Book2);
	return 0;
}
void printBook ( struct Books *book) {
	printf( "Book title: %s\n", book->title);
	printf( "Book author: %s\n", book->author);
	printf( "Book subject: %s\n", book->subject);
	printf( "Book subject: %d\n", book->book_id);
}

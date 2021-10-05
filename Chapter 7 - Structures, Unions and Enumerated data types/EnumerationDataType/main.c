/*
* C Program to demonstrate the use of Enumerated Data Type 
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaring Variables, Enumeration 
	int A = 5, B = 10;
	enum BOOKS {Book1, Book2};

	//Printing the enum values
	printf("%i %i", Book1, Book2);

	//Declaring an enum Variable
	enum BOOKS Book3 = (enum BOOKS)A + B;

	//Printing the result
	printf("%i", Book3);
}
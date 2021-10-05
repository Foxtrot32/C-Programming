/*
* C Program to demonstrate the use of increment operator in pointers
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaration 
	int M, * A;

	//Getting input from user
	scanf("%i", &M);

	//Assigning Pointer to variable address
	A = &M;

	//Printing Outcome from input
	printf("%p", A);

	//Performing Incrementation and printing the result 
	(*A)++;
	printf("%i", *A);
	*(A++);
	printf("\n%p", A);
}
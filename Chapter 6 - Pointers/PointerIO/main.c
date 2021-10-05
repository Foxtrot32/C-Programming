/*
* C Program to demonstrate the use of pointers
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaration
	int N, * A;

	//Getting input from user
	scanf("%i", &N);

	//Assigning the pointer to integer variable 
	A = &N;

	//Printing the results
	printf("%i\n", *A);
	printf("%p\n", A);
	printf("%p", &N);
}
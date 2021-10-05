/*
* C Program to demonstrate the functions of two pointers
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaration 
	int N, * A, * B;

	//Getting input from user
	scanf("%i", &N);

	//Assigning Pointer to variable 
	A = &N;
	B = A;

	//Printing the results
	printf("%i\n", N);
	printf("%p %p\n", *A, *B);
	printf("%p %p\n", A, B);
	printf("%p", &N);

}
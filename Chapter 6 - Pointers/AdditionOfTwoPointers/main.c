/*
* C Program to demonstrate the addition of two pointers
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaration
	int A, B, * M, * N;

	//Getting input from user
	scanf("%i %i", &A, &B);

	//Assigning Pointers to variable addresses
	M = &A;
	N = &B;

	//Adding two pointers and printing the result
	printf("%i", *M + *N);
}
/*
* C Program to demonstrate the concept of function pointers
* By Rohan S Gurumurthy
*/
#include <stdio.h>

//Function Prototype
int Add(int A, int B)
{
	return A + B;
}

int (*Add1)(int A, int B);
int main(void)
{
	//Declaration
	int A, B;

	//Getting input from user
	scanf("%i %i", &A, &B);

	//Assigning Function Pointer to Point the function 'Add'
	Add1 = Add;

	//Printing the result
	printf("%i", (*Add1)(3, 5));
	printf("\n%i", (*Add1)(A, B));
}
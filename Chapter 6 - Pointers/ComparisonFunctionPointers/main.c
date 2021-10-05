/*
* C Program to demonstrate comparison of pointers
* By Rohan S Gurumurthy
*/
#include <stdio.h>

//Function prototype
int Add(int A, int B);
int Sub(int A, int B);
int (*Pointer)(int, int);

int main(void)
{
	//Declaration 
	int A, B;

	//Getting input from user
	scanf("%i %i", &A, &B);

	//Assigning pointer to a function 
	Pointer = Add;

	//Printing Result 1
	printf("%i", (*Pointer)(A, B));

	//Checking for equality
	if (Pointer == Sub)
	{
		printf("Pointer points to Sub\n");
	}
	else
	{
		printf("Pointer does not point to sub\n");
	}

}
int Add(int A, int B)
{
	return A + B;
}

int Sub(int A, int B)
{
	return A - B;
}
/*
* C Program to implement function pointer as an arguement to another function 
* By Rohan S Gurumurthy
*/
#include <stdio.h>

//Function Prototypes
int (*Pointer)(int A, int B);
int Add(int A, int B);
int Sub(int A, int B);
int Operate(int (*Pointer)(int, int) , int A, int B);
int main(void)
{
	//Declaration 
	int A, B;

	//Getting input from user
	scanf("%i %i", &A, &B);

	//Calling the pointer
	Operate(Sub, A, B);
}

int Add(int A, int B)
{
	return A + B;
}

int Sub(int A, int B)
{
	return A - B;
}

int Operate(int (*Pointer)(int, int), int A, int B)
{
	printf("%i", ((*Pointer)(A, B)));
	return 0;
}
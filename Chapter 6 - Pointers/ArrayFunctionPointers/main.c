/*
* C Program to demonstrate the use of array of pointers
* By Rohan S Gurumurthy
*/
#include <stdio.h>

//Function Prototype 
int (*FArray[5])(int, int);
int Add(int A, int B);
int  Sub(int A, int B);
int Mul(int A, int B);
int Quotient(int A, int B);
int Remainder(int A, int B);

int main(void)
{
	//Declaration
	int Slot, A, B;

	//Getting input from user
	scanf("%i", &Slot);
	scanf("%i %i", &A, &B);

	//Assigning Function Pointers to functions
	FArray[0] = Add;
	FArray[1] = Sub;
	FArray[2] = Mul;
	FArray[3] = Quotient;
	FArray[4] = Remainder;

	switch (Slot)
	{
	case 0: printf("%i", (*FArray[0])(A, B));
		    break;
	case 1: printf("%i", (*FArray[1])(A, B));
		break;
	case 2: printf("%i", (*FArray[2])(A, B));
		break;
	case 3: printf("%i", (*FArray[3])(A, B));
		break;
	case 4: printf("%i", (*FArray[4])(A, B));
		break;
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

int Mul(int A, int B)
{
	return A * B;
}

int Quotient(int A, int B)
{
	return A / B;
}

int Remainder(int A, int B)
{
	return A % B;
}
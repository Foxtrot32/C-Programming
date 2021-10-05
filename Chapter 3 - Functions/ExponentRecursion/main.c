/*C Program to perform exponent Recursion*/
#include <stdio.h>

//Function Prototype
int ExpRecursion(int N, int Exp);

//Main Function 
int main(void)
{
	//Declaring integer variables
	int N, Exp;

	//Getting input from user
	scanf("%i %i", &N, &Exp);

	//Getting the result
	int Result = ExpRecursion(N, Exp);

	//Printing the result
	printf("Result = %i", Result);
}

int ExpRecursion(int N, int Exp)
{
	if (Exp == 1)
	{
		return N;
	}
	else if (Exp > 1)
	{
		return N * ExpRecursion(N, Exp - 1);
	}
}
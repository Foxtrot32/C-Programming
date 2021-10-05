/*C Program to find factorial of a number using recursion*/
#include <stdio.h>

//Function Prototype
int Fact(int N);

//Main Function
int main(void)
{
	//Declaring an integer variable
	int N;

	//Getting input from user
	scanf("%i", &N);

	//Getting Result
	int Result = Fact(N);

	//Printing the result
	printf("Factorial of %i is %i", N, Result);
}

int Fact(int N)
{
	if (N == 1)
	{
		return 1;
	}
	else
	{
		return N * Fact(N - 1);
	}
}
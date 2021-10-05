/*C Program to perform Fibonacci Series using recursion */
#include <stdio.h>

//Function Prototype
int FibonacciRecursion(int a, int b, int c, int n);

//Main Function
int main(void)
{
	//Declaring four integer variables
	int a = 1, b = 0, c = 0, n;

	//Getting input from user
	scanf("%i", &n);

	//Passing arguements through functions
	FibonacciRecursion(a, b, c, n);
}

int FibonacciRecursion(int a, int b, int c, int n)
{
	if (n >= 1)
	{
		printf("%i ", a);
		c = a + b;
		a = b;
		b = c;
		return FibonacciRecursion(a, b, c, n - 1);
	}
}
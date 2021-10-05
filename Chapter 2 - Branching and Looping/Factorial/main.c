/*C Program to find the factorial of a number*/
#include <stdio.h>

int main(void)
{
	//Declaring a integer variables to get Number and to find factorial
	int Number, Fact = 1;

	//Getting input for number
	scanf_s("%i", &Number);

	//Finding the factorial
	for (int i = Number; i >= 1; --i)
	{
		Fact *= i;
	}

	//printing the output
	printf("%i", Fact);
}
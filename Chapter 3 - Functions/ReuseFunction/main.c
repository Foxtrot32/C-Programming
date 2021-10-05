/*C Program to show reusablility of a function*/
#include <stdio.h>

//Function prototype
int Factorial(int i);

//Main function 
int main(void)
{
	//Declaring two integer variables N and i
	int N, i = 0;

	//Getting input for variable N(size)
	scanf_s("%i", &N);

	//to print factorial of 1
	printf("Factorial of 1 is 1\n");
	
	//loop to get factorial of a number
	for (int i = 2; i <= N; i++)
	{
		int F = Factorial(i);
		printf("Factorial of %i is %i\n", i, F);
	}
}

int Factorial(int i)
{
	int fact = 1;
	do
	{
		fact *= i;
		i--;
	} 
	while (i > 1);
	return fact;
}
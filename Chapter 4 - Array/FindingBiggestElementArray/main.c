/*
* C Program to find and print the biggest element of the array using functions
*/
#include <stdio.h>

//Function Prototype
int BiggestElement(int Array[], int N);

//Main Function
int main(void)
{
	//Declaring integer variables, array
	int N, Array[20];

	//Getting input from user
	scanf("%i", &N);

	//Getting input for array elements
	for (int i = 0; i < N; i++)
	{
		scanf("%i", &Array[i]);
	}

	//Function Call
	BiggestElement(Array, N);
}

int BiggestElement(int Array[], int N)
{
	int Big = 0;
	for (int i = 0; i < N; i++)
	{
		if (Big < Array[i])
		{
			Big = Array[i];
		}
	}

	printf("Biggest = %i", Big);
}
/*
* C Program to find the largest and smallest element of an array
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaring an integer variable, array of 20 elements
	int N, Array[20];

	//Getting input from user for array size
	scanf("%i", &N);

	//Getting input for array elements
	for (int i = 0; i < N; i++)
	{
		scanf("%i", &Array[i]);
	}

	//Finding the largest element
	int large = 0;
	for (int i = 0; i < N; i++)
	{
		if (large < Array[i])
		{
			large = Array[i];
		}
	}

	//Finding the smallest element
	int small = Array[0];
	for (int i = 1; i < N; i++)
	{
		if (small > Array[i])
		{
			small = Array[i];
		}
	}

	//Printing the result
	printf("The largest element present in the array is %i.\n", large);
	printf("The smallest element present in the array is %i.\n", small);
}
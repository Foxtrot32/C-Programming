/*
* C Program to print the second largest element 
*/
#include <stdio.h>
int main(void)
{
	//Declaring an integer variable, array of 20 elements
	int N, Array[20];

	//Getting input for array size
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

	//Finding the second largest
	int SecondLargest = 0;
	for (int i = 0; i < N; i++)
	{
		if (SecondLargest < Array[i])
		{
			if (Array[i] < large)
			{
				SecondLargest = Array[i];
			}
		}
	}

	//Printing the result
	printf("The Second Largest Element in the array is %i", SecondLargest);
}
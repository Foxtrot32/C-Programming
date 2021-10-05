/*
* C Program to perform insertion sort
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	int N, i, j, Array[20];

	//Getting input from user
	scanf("%i", &N);

	//Getting input for array elements
	for (i = 0; i < N; i++)
	{
		scanf("%i", &Array[i]);
	}

	//Sorting the elements using insertion sort
	for (i = 1; i < N; i++)
	{
		int Temp = Array[i];
		j = i - 1;
			while (Temp < Array[j] && j >= 0)
			{
				Array[j + 1] = Array[j];
				j--;
			}
		Array[j + 1] = Temp;
	}

	//Printing the array
	for (i = 0; i < N; i++)
	{
		printf("%i ", Array[i]);
	}
}
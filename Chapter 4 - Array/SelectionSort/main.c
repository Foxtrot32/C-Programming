/*
* C Program to perform selection sort 
* By Rohan S Gurumurthy
*/
#include <stdio.h>

//Function Prototypes
int SelectionSort(int Array[], int N);
int Smallest(int Array[], int K, int N);
int main(void)
{
	//Declaring integer variables
	int N, Array[20];

	//Getting input from user
	scanf("%i", &N);

	//Getting input for array elements
	for (int i = 0; i < N; i++)
	{
		scanf("%i", &Array[i]);
	}

	//Function Call
	SelectionSort(Array, N);

	//Printing the array 
	for (int i = 0; i < N; i++)
	{
		printf("%i ", Array[i]);
	}
}

int SelectionSort(int Array[], int N)
{
	int Temp = 0;
	for (int k = 0; k < N; k++)
	{
		int Small1 = Smallest(Array, k, N);
		Temp = Array[k];
		Array[k] = Array[Small1];
		Array[Small1] = Temp;
	}
	return 0;
}

int Smallest(int Array[], int K, int N)
{
	int Pivot = K, Small = Array[Pivot], Position = 0;
	for (int j = K + 1; j < N; j++)
	{
		if (Array[j] < Small)
		{
			Small = Array[j];
			Position = j;
		}
	}
	return Position;
}
/*
* C Program to delete an element from the array
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaring integer variables, Array
	int N, Position, Array[20];

	//Getting input for array size
	scanf("%i ", &N);

	//Getting input for array elements
	for (int i = 0; i < N; i++)
	{
		scanf("%i ", &Array[i]);
	}

	//Getting input for element to be deleted
	scanf("%i", &Position);

	//Deleting the element
	for (int i = Position; i < N; i++)
	{
		Array[i] = Array[i + 1];
	}

	//Reducing the size of array 
	N = N - 1;

	//Printing the array
	for (int i = 0; i < N; i++)
	{
		printf("%i ", Array[i]);
	}
}
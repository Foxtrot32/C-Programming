/*
* C Program to read and print the elements of an integer array 
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaring an integer variable for array size
	int N;

	//Getting input for array size
	scanf("%i", &N);

	//Declaring an array of Size N and getting input from user
	int Array[20];

	for (int i = 0; i < N; i++)
	{
		scanf("%i", &Array[i]);
	}

	//Printing the elements of the array
	for (int i = 0; i < N; i++)
	{
		printf("%i ", Array[i]);
	}
}
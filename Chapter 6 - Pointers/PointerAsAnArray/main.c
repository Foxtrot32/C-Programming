/*
* C Program to use pointer as an array
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaration 
	int Array[10], N;
	int* Ptr;

	//Getting input for array
	scanf("%i", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%i", &Array[i]);
	}

	//Making the pointer point to array
	Ptr = Array;

	//Printing the result
	for (int i = 0; i < N; i++)
	{
		printf("%i ", *(Array + i));
	}
}
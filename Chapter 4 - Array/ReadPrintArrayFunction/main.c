/*
* C Program to read and print an array using functions
*/
#include <stdio.h>

//Functuon Prototype
int ReadPrintArray(int Array[], int N);

//Main Function
int main(void)
{
	//Declaring integer variable, array
	int N, Array[20];

	//Getting input from user
	scanf("%i", &N);

	//Passing the array through a function
	ReadPrintArray(Array, N);
}

//Function to read and print an array
int ReadPrintArray(int Array[], int N)
{
	//Getting input from user
	for (int i = 0; i < N; i++)
	{
		scanf("%i", &Array[i]);
	}

	//Printing the array
	for (int i = 0; i < N; i++)
	{
		printf("%i ", Array[i]);
	}
	return 0;
}
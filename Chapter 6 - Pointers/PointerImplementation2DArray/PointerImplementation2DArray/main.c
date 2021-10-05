/*
* C Program to demonstrate pointer to a 2D Array 
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaration 
	int(*parr)[3], Array[3][3];

	//Getting input from user
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%i", &Array[i][j]);
		}
	}

	//Assigning pointer to array 
	parr = Array;

	//Printing the result
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%i ", *(*(parr + i) + j));
		}
		printf("\n");
	}
}
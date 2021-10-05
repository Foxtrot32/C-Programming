/*
* C Program to demonstrate the concept of 2D Arrays using double pointer
* By Rohan S Gurumurthy
*/
#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3
int main(void)
{
	//Declaration 
	int** Array = malloc(ROWS *  sizeof(int*));

	//Getting input
	for (int i = 0; i < ROWS; i++)
	{
		Array[i] = (int*)malloc(COLS * sizeof(int));
		for (int j = 0; j < COLS; j++)
		{
			scanf("%i", &Array[i][j]);
		}
	}

	//Printing the output 
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%i ", Array[i][j]);
		}
		printf("\n");
	}

	//Freeing the memory 
	for (int i = 0; i < ROWS; i++)
		free(Array[i]);

	free(Array);

}
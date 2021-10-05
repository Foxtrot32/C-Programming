/*
* C Program to transpose a 2D Matrix
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaring Variables, Matrices
	int Row, Column, Matrix[5][5], TMatrix[5][5];

	//Getting input for dimensions of matrix
	scanf("%i %i", &Row, &Column);

	//Getting Matrix Elements
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Column; j++)
		{
			scanf("%i ", &Matrix[i][j]);
		}
	}

	//Transposing the Matrix
	for (int i = 0; i < Column; i++)
	{
		for (int j = 0; j < Row; j++)
		{
			TMatrix[i][j] = Matrix[j][i];
		}
	}

	//Printing the Output
	printf("MATRIX BEFORE TRANSPOSING: \n");
	
	//Printing the inputted matrix
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Column; j++)
		{
			printf("%i ", Matrix[i][j]);
		}
		printf("\n");
	}

	//Printing the transposed matrix
	printf("\nTHE TRANSPOSED MATRIX: \n");
	for (int i = 0; i < Column; i++)
	{
		for (int j = 0; j < Row; j++)
		{
			printf("%i ", TMatrix[i][j]);
		}
		printf("\n");
	}
}
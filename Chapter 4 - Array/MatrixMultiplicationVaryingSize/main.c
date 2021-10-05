/*
* C Program to perform matrix multiplication with varied size
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaring variables and matrices
	int M, N, P, Q, Matrix1[5][5], Matrix2[5][5], Result[5][5];

	//Getting input from user
	scanf("%i %i", &M, &N);
	scanf("%i %i", &P, &Q);

	//Getting input for matrix 1
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%i", &Matrix1[i][j]);
		}
	}

	//Getting input for matrix 2
	for (int i = 0; i < P; i++)
	{
		for (int j = 0; j < Q; j++)
		{
			scanf("%i", &Matrix2[i][j]);
		}
	}

	//Performing matrix multiplication
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < Q; j++)
		{
			Result[i][j] = 0; 
			for (int k = 0; k < Q; k++)
			{
				Result[i][j] += Matrix1[i][k] * Matrix2[k][j];
			}
		}
	}

	//Printing the result
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < Q; j++)
		{
			printf("%i ", Result[i][j]);
		}
		printf("\n");
	}
}
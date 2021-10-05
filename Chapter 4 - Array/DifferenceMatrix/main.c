/*
* C Program to find the difference of two matrices
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaring variables and array
	int M, N, P, Q, Matrix1[5][5], Matrix2[5][5], Result[5][5];

	//Getting input from user
	scanf("%i %i", &M, &N);
	scanf("%i %i", &P, &Q);

	//Checking if the rows and columns are equal
	if (M == P && N == Q)
	{
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

		//Getting the result
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				Result[i][j] = Matrix1[i][j] - Matrix2[i][j];
			}
		}

		//Printing the result
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				printf("%i ", Result[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("ROWS AND COLUMN ARE NOT EQUAL!");
	}
}
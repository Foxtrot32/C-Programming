/*
* C Program to find the Sum of Matrices
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaring variables and 2D Arrays
	int M, N, P, Q, Matrix1[5][5], Matrix2[5][5], Result[5][5];

	//Getting input for M and N
	scanf("%i %i", &M, &N);

	//Getting input for P and Q
	scanf("%i %i", &P, &Q);

	//Checking for equality in size
	if (M == P && N == Q)
	{
		printf("ENTER INPUT FOR MATRIX 1:\n");

		//Getting input for matix 1
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				scanf("%i ", &Matrix1[i][j]);

			}
		}

			printf("ENTER INPUT FOR MATRIX 2:\n");

			//Getting input for matix 2
			for (int i = 0; i < M; i++)
			{
				for (int j = 0; j < N; j++)
				{
					scanf("%i ", &Matrix2[i][j]);
				}
			}

			//Getting the result
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					Result[i][j] = Matrix1[i][j] + Matrix2[i][j];
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
		printf("MATRICES ARE NOT EQUAL!\n");
		return -1;
	}
}
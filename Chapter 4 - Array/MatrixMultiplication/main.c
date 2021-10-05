/*C Program to find Product of two 2D Arrays*/
#include <stdio.h>

int main(void)
{
	//Declaring three 2D Arrays A, B and C of type int, Three integer variables Sum,i and j
	int A[3][3], B[3][3], C[3][3], i, j, Sum = 0;
	
	//Getting input for Matrix A
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{  
			scanf("%i ", &A[i][j]);
		}
	}

	//Getting input for Matrix B
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%i ", &B[i][j]);
		}
	}

	//Initializing Result Matrix to 0
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			C[i][j] = 0;
		}
	}

	//Performing Multiplication of two matrices
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				Sum += A[i][k] * B[k][j];
			}
			C[i][j] = Sum;
			Sum = 0;
		}
	}

	//Printing the result
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%i ", C[i][j]);
		}
		printf("\n");
	}
}
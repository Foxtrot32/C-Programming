/*
* C Program to demonstrate pointers to 3D Array
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaration
	int(*Arr)[3][3] = 

	//Getting input
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				scanf("%i", ((Arr + i) + j) + k);
			}
		}
	}


	//Printing the result
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				printf("%i", *(*(*(Arr + i) + j) + k));
			}
			printf("\t");
		}
		printf("\n");
	}
}
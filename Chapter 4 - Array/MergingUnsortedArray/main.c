/*
* C Program to merge two unsorted arrays
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaring integer variables and arrays
	int N1, N2, M, Index, Array1[10], Array2[10], Array3[20];

	//Getting input for Array1 Size 
	scanf("%i", &N1);

	//Getting input for array elements
	for (int i = 0; i < N1; i++)
	{
		scanf("%i", &Array1[i]);
	}

	//Getting input for Array2 Size
	scanf("%i", &N2);

	//Getting input for array elements
	for (int i = 0; i < N2; i++)
	{
		scanf("%i", &Array2[i]);
	}

	//Merging the arrays 
	M = N1 + N2;

	//Assigning 0 as Index value
	Index = 0;

	//Copying the contents of first array into the third array
	for (int i = 0; i < N1; i++)
	{
		Array3[Index] = Array1[i];
		Index++;
	}

	//Copying the contents of second array into third array
	for (int i = 0; i < N2; i++)
	{
		Array3[Index] = Array2[i];
		Index++;
	}

	//Printing the array
	for (int i = 0; i < M; i++)
	{
		printf("%i ", Array3[i]);
	}
}
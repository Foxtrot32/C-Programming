/*
* C Program to merge two sorted arrays
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaring integer variables, Arrays
	int N1, N2, M, Index, Index1, Index2, Array1[10], Array2[10], Array3[20];

	//Getting size for array 1
	scanf("%i", &N1);

	//Getting input for array elements
	for (int i = 0; i < N1; i++)
	{
		scanf("%i", &Array1[i]);
	}

	//Getting size for array 2
	scanf("%i", &N2);

	//Getting input for elements of second array
	for (int i = 0; i < N2; i++)
	{
		scanf("%i", &Array2[i]);
	}

	//Merging two arrays
	Index = 0, Index1 = 0, Index2 = 0;

	while (Index1 < N1 && Index2 < N2)
	{
		if (Array1[Index1] < Array2[Index2])
		{
			Array3[Index] = Array1[Index1];
			Index1++;
		}
		else
		{
			Array3[Index] = Array2[Index2];
			Index2++;
		}
		Index++;
	}

	//For Elements that were not inserted
	if (Index1 == N1)
	{
		while (Index2 < N2)
		{
			Array3[Index] = Array2[Index2];
			Index2++;
			Index++;
		}
	}
	else
	{
		while (Index1 < N1)
		{
			Array3[Index] = Array1[Index1];
			Index1++;
			Index++;
		}
	}

	//Printing the array
	M = N1 + N2;
	for (int i = 0; i < M; i++)
	{
		printf("%i ", Array3[i]);
	}
}
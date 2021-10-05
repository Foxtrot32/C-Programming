/* C Program to sort the elements of an array in ascending order using bubble sort*/
#include <stdio.h>

int main(void)
{
	//Declaring integer variables Temp,Size, i and j and Array Array having 20 elements
	int i, j, Size, Temp = 0, Array[20];

	//Getting input for array size
	printf("ENTER INPUT FOR ARRAY SIZE: ");
	scanf_s("%i", &Size);

	//Getting input for array elements
	printf("\nENTER INPUT FOR ARRAY ELEMENTS: ");
	for (i = 0; i < Size; i++)
	{
		scanf_s("%i ", &Array[i]);
	}

	//Sorting the elements of the array
	for (i = 0; i < Size - 1; i++)
	{
		for (j = 0; j < Size - i - 1; j++)
		{
			if (Array[j] > Array[j + 1])
			{
				Temp = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = Temp;
			}
		}
	}

	//Printing the sorted array
	printf("\nARRAY AFTER SORTING: ");
	for (i = 0; i < Size; i++)
	{
		printf("%i ", Array[i]);
	}
}
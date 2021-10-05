/*
*C Program to perform linear search
* By Rohan S Gurumurthy
*/
#include <stdio.h>

int main(void)
{
	//Declaring integer variables i,Element, Size and Array Number of 20 elements
	int Element, Size, i, Number[20];

	//Getting input for Size of Array 
	scanf_s("%i", &Size);

	//Getting input for array elements
	for (i = 0; i < Size; i++)
	{
		scanf_s("%i", &Number[i]);
	}

	//Getting input for element to be found
	scanf_s("%i", &Element);

	//Searching and printing the location of element if found
	for (i = 0; i < Size; i++)
	{
		if (Element == Number[i])
		{
			printf("Element found at position %i", i + 1);
			return 0;
		}
	}
	printf("Not Found!");
	return 1;
}
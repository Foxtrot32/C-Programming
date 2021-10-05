/*
* C Program to insert element in an sorted array
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaring integer variables, array
	int N, Element, Position = 0, Array[20];

	//Getting input for array size
	scanf("%i", &N);

	//Getting input for array elements
	for (int i = 0; i < N; i++)
	{
		scanf("%i", &Array[]);
	}

	//Getting input for element to be inserted
	scanf("%i", &Element);

	//Getting the Position
	for (int i = 0; i < N; i++)
	{
		if (Array[i] <= Element && Array[i + 1] >= Element)
		{
			Position = i + 1;
			break;
		}
	}

	//Moving the elements
	for (int i = N + 1; i >= Position; i--)
	{
		Array[i] = Array[i - 1];
	}

	//Assigning the element to its position
	Array[Position] = Element;

	//Printing the array 
	for (int i = 0; i < N + 1; i++)
	{
		printf("%i ", Array[i]);
	}
}
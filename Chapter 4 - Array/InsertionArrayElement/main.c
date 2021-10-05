/*
* C Program to insert an element to the array 
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaring an integer variable, array
	int N, Array[20], Pos, Element;

	//Getting Array Size from user
	scanf("%i", &N);

	//Getting Array Elements from the user
	for (int i = 0; i < N; i++)
	{
		scanf("%i", &Array[i]);
	}

	//Getting inputs for new elements and Pos
	scanf("%i", &Element);
	scanf("%i", &Pos);

	//Adding the space for element to be inserted
	for (int i = N + 1; i >= Pos; i--)
	{
		Array[i] = Array[i - 1];
	}

	//Inserting the element
	Array[Pos] = Element;

	//Printing the array
	for (int i = 0; i < N + 1; i++)
	{
		printf("%i ", Array[i]);
	}
}
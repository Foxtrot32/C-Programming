/*C Program to perform Binary Search*/
#include <stdio.h>

int main(void)
{
	//Declaring integer variables Begin, End, Element, Middle, Found, i and integer array Numbers of 10 elements
	int Begin = 0, Middle, End, Element, Found = 0, i, Numbers[10];

	//Getting input for size of array 
	scanf("%i", &End);

	//Getting array elements
	for (i = 0; i < End; i++)
	{
		scanf("%i", &Numbers[i]);
	}

	//Getting input for element to be found
	scanf("%i", &Element);

	//Performing Binary Search
	while (Found == 0)
	{
		Middle = (Begin + End) / 2;
		if (Numbers[Middle] == Element)
		{
			printf("Element is found at Index %i", Middle);
			Found = 1;
		}
		else if (Numbers[Middle] > Element)
		{
			End = Middle - 1;
		}
		else if (Numbers[Middle] < Element)
		{
			Begin = Middle + 1;
		}
		else if (Begin > End)
		{
			return -1;
		}
	}


}
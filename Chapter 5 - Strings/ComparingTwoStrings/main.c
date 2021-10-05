/*
* C Program to compare two strings
* By Rohan S Gurumurthy
*/
#include <stdio.h>

//Function Prototype
int StringLength(char String[]);

//Main Function
int main(void)
{
	//Declaration
	int Length1, Length2;
	char String1[100], String2[100];

	//Getting input
	gets(String1);
	gets(String2);

	//Getting Length
	Length1 = StringLength(String1);
	Length2 = StringLength(String2);

	//Checking if two strings are equal
	if (Length1 == Length2)
	{
		int Count = 0;
		for (int i = 0; i < Length1; i++)
		{
			if (String1[i] == String2[i])
			{
				Count++;
			}
		}

		//Printing the Outcome
		if (Length1 - Count == 0)
		{
			printf("TWO STRINGS ARE EQUAL!");
		}
		else
		{
			printf("TWO STRINGS ARE NOT EQUAL!");
		}
	}
	else
	{
		printf("TWO STRINGS CANNOT BE EQUAL!");
	}
}

int StringLength(char String[])
{
	//Declaration
	int i = 0, Count = 0;

	//Calculating Length
	for (int i = 0; String[i] != '\0'; i++)
	{
		Count++;
	}

	//Returning Length
	return Count;
}
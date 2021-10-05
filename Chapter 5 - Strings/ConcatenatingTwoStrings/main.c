/*
* C Program to perform Concatenation of two strings
* By Rohan S Gurumurthy
*/
#include <stdio.h>

//Function Prototype
int LengthString(char String[]);

//Main Function
int main(void)
{
	//Declaration
	int Length1, Length2, NewLength;
	char String1[100], String2[100], NewString[200];

	//Getting input
	gets(String1);
	gets(String2);

	//Finding the length of strings
	Length1 = LengthString(String1);
	Length2 = LengthString(String2);

	//Getting the NewLength
	NewLength = Length1 + Length2;

	//Concatenating String1 
	for (int i = 0; i < Length1; i++)
	{
		NewString[i] = String1[i];
	}

	//Adding String2
	for (int i = Length1; i < NewLength; i++)
	{
		NewString[i] = String2[i - Length1];
	}

	//Printing the string
	for (int i = 0; i < NewLength; i++)
	{
		printf("%c", NewString[i]);
	}
}

int LengthString(char String[])
{
	//Declaration
	int i = 0, Count = 0;

	//Finding the length
	for (i = 0; String[i] != '\0'; i++)
	{
		Count++;
	}
	
	return Count;
}
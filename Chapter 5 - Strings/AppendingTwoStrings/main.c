/*
* C Program to Append two strings
* By Rohan S Gurumurthy
*/
#include <stdio.h>

//Function Prototype
int StringLength(char String[]);

//Main Function
int main(void)
{
	//Declaration
	int Length1, Length2, NewLength;
	char String1[100], String2[200];

	//Getting input
	gets(String1);
	gets(String2);

	//Getting Length of Strings
	Length1 = StringLength(String1);
	Length2 = StringLength(String2);

	//Setting NewLength
	NewLength = Length1 + Length2;

	//Appending the Strings
	for (int i = Length2; i < NewLength; i++)
	{
		String2[i] = String1[i - Length2];
	}

	//Printing the string
	for (int i = 0; i < NewLength; i++)
	{
		printf("%c", String2[i]);
	}
}

int StringLength(char String[])
{
	//Declaration
	int i = 0, Count = 0;

	//Finding the length
	for (i = 0; String[i] != '\0'; i++)
	{
		Count++;
	}

	//Returning the length
	return Count;
}
/*
* C Program to reverse a string
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaration
	int Length = 0;
	char String[100];

	//Getting input
	gets(String);

	//Getting Length of String
	for (int i = 0; String[i] != '\0'; i++)
	{
		Length++;
	}

	//Reversing the String
	char Swap = String[0];
	for (int i = 0; i < (Length / 2) + 1; i++)
	{
		Swap = String[i];
		String[i] = String[Length - i];
		String[Length - i] = Swap;
	}

	//Printing the string
	for (int i = 0; i < Length + 1; i++)
	{
		printf("%c", String[i]);
	}
}
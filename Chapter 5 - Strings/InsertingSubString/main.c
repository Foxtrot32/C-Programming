/*
* C Program to Insert a SubString
* By Rohan S Gurumurthy
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	//Declaration 
	int Length1, Length2, Pos;
	char String[100], SubString[50];

	//Getting input
	gets(String);
	gets(SubString);

	//Getting Position to be inserted
	scanf("%i", &Pos);

	//Finding Length 
	Length1 = strlen(SubString);
	Length2 = strlen(String);

	//Allocating Space For String
	for (int i = Length2; i >= Pos; i--)
	{
		String[i + Length1] = String[i];
	}

	//Adding SubString to String
	for (int i = Pos; i < Length1 + Pos; i++)
	{
		String[i] = SubString[i - Pos];
	}

	for (int i = 0; i < Length1 + Length2; i++)
	{
		printf("%c", String[i]);
	}
}
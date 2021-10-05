/*
* C Program to check if a substring is present in the main string 
* By Rohan S Gurumurthy
*/
#include <stdio.h>

int main(void)
{
	//Declaration 
	char String1[100], String2[50];

	//Getting input
	gets(String1);
	gets(String2);

	//Getting String Length
	int Length1 = strlen(String1);
	int Length2 = strlen(String2);

	//Checking the SubString Presence
	int Pos = -1;
	for (int i = 0; i < Length1; i++)
	{
		for (int j = 0; j < Length2; j++)
		{
			if (String1[i] == String2[j] && String1[i + Length2 - 1] == String2[Length2 - 1])
			{
				Pos = i;
				break;
			}
		}
	}

	//Printing the outcome 
	if (Pos == -1)
	{
		printf("STRING NOT FOUND!");
	}
	else
	{
		printf("STRING FOUND AT POSITION %d", Pos);
	}
}
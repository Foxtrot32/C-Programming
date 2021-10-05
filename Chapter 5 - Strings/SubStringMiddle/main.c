/*
* C Program to extract SubString From Middle 
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaration 
	int Begin, End;
	char String[100], SubString[50];

	//Getting input 
	gets(String);

	//Getting input for Begin and End 
	scanf("%i %i", &Begin, &End);

	//Extracting the SubString
	int j = 0;
	for (int i = Begin; i < End + 1; i++)
	{
		SubString[j] = String[i];
		j++;
	}

	//Printing the SubString
	for (int i = 0; i < j; i++)
	{
		printf("%c", SubString[i]);
	}
}
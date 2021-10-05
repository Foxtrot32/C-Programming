/*
* C Program to Get SubString from left of String
* By Rohan S Gurumurthy
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	//Declaration
	int Length, N; 
	char String[100], SubString[50];

	//Getting Input
	gets(String);

	//Getting input for length of SubString
	scanf("%i", &N);

	//Getting the Substring
	int i = 0;
	while (i < N && String[i] != '\0')
	{
		SubString[i] = String[i];
		i++;
	}

	//Printing the substring
	for (int j = 0; j < i; j++)
	{
		printf("%c", SubString[j]);
	}
}
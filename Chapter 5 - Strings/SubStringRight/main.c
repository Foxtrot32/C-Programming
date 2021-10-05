/*
* C Program to extract Substring from right
* By Rohan S Gurumurthy
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	//Declaration 
	int N, Length;
	char String[100], SubString[50];

	//Getting input 
	gets(String);

	//Getting String Length
	Length = strlen(String);

	//Getting input for N
	scanf("%d", &N);

	//Extracting The Substring
	int j = 0; 
	for (int i = Length - N - 1; i < Length; i++)
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

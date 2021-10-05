/*
* C Program to print a pattern using string
* By Rohan S Gurumurthy
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	//Declaration
	char String[100] ="\0";

	//Getting input
	gets(String);

	//Getting Size of String
	int N = strlen(String);

	//Printing the pattern 
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%c ", String[j]);
		}
		printf("\n");
	}
}
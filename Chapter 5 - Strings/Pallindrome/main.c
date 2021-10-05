/*
* C Program to check if a strings is a pallindrome
* By Rohan S Gurumurthy
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	//Declaration 
	char String1[100], String2[100];

	//Getting input from user
	gets(String1);
	
	//Reversing the string
	int Index = 0, N = strlen(String1) - 1;
	while (N >= 0)
	{
		String2[Index] = String1[N];
		N--;
		Index++;
	}

	if (strncmp(String1, String2, strlen(String1) - 1) == 0)
	{
		printf("It's a pallindrome!");
	}
	else
	{
		printf("Not a pallindrome!");
	}
}
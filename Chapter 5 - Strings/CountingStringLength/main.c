/*
* C Program to Count the length of the string
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaration 
	char String[100] = "\0";

	//Getting input
	gets(String);

	//Counting the length
	int Count = 0;
	for (int i = 0; String[i] != '\0'; i++)
	{
		Count++;
	}

	//Printing the Result
	printf("THE STRING HAS %d CHARACTERS.", Count);
}
/*
* C Program to convert lowercase characters to uppercase
* By Rohan S Gurumurthy
*/
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	//Declaration 
	char String[100];

	//Getting input and making sure lowercase is received
	gets(String);

	//Converting lowercase to uppercase
	for (int i = 0; String[i] != '\0'; i++)
	{
		if (islower(String[i]))
		{
			String[i] = toupper(String[i]);
		}
	}

	//Printing the output
	puts(String);
}
/*
* C Program to Input and Print a String
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaration
	char String[100] = "\0";

	//Getting input
	gets(String);

	//Getting Output
	printf("%s", String);
}
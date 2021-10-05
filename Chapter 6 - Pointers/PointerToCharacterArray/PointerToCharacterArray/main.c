/*
* C Program to demonstrate pointer to an character array
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaration 
	char* String = malloc(sizeof(char) * 100);

	//Getting input from user
	gets(String);

	//Printing the output 
	puts(String);
}
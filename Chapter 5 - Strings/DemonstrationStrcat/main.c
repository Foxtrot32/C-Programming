/*
* C Program to demonstrate the use of strcat()
* By Rohan S Gurumurthy
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	//Declaration 
	char String1[100], String2[200];

	//Getting input
	gets(String1);
	gets(String2);

	//Concatenating using strcat()
	strcat(String1, String2);

	//Printing the String
	puts(String1);
}
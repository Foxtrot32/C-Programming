/*
* C Program to perform printing techniques
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaration
	char String[] = "Programming Lessons";

	//Printing the output
	printf("%20.5s\n", String);
	printf("%20s\n", String);
	printf("%-20.5s\n", String);
	printf("%s", &String[10]);
}
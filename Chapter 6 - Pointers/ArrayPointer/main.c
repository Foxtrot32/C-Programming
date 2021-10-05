/*
* C Program to demonstrate the concept Array of Pointer using C 
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaration
	char* Ptr[10];

	//Getting inpsut from user
	for (int i = 0; i < 10; i++)
	{
		scanf("%s", (Ptr + i));
		printf("\n");
	}

	//Printing the arrays 
	int i = 0;
	while (i <= 10)
	{
		printf("%s\n", (Ptr + i));
		i++;
	}
}
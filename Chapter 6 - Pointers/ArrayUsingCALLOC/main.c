/*
* C Program to implement arrays using calloc() function 
* By Rohan S Gurumurthy
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//Declaration
	int* Array = calloc(10, sizeof(int));
    
	//Getting input from user
	for (int i = 0; i < 10; i++)
	{
		scanf("%i", &Array[i]);
	}

	//Printing the output
	for (int i = 0; i < 10; i++)
	{
		printf("%i ", Array[i]);
	}
}
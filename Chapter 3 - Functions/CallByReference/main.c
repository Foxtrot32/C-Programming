#include <stdio.h>

//Declaring Function Prototype
int AddByRef(int* A, int* B);

//Main Function
int main(void)
{
	//Declaring two integer variables
	int A, B;

	//Getting input from user
	scanf("%i %i", &A, &B);

	//Passing the arguements through function
	AddByRef(&A, &B);
}

int AddByRef(int* A, int* B)
{
	printf("Sum = %d", (*A + *B));
	return 0;
}
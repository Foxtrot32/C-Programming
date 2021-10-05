/* C Program to demonstrate the use of function and function call */
#include<stdio.h>

//Function prototype for integer function addition
int Addition(int A, int B);

//Main function with return type void
int main(void)
{
	//Declaring three integer variables A, B and C
	int A, B, C;

	//Getting input for integer variable A and B from user
	scanf_s("%d %d", &A, &B); 

	//Calling function to get value for C
	C = Addition(A, B);

	//Printing the result
	printf("Sum = %d ", C);
}

int Addition(int A, int B)   //Adding up of two numbers
{
	//Declaring integer variable C
	int C;  

	//Performing addition of A and B, assigning value to C
	C = A + B;

	//Returning the result
	return C;
}
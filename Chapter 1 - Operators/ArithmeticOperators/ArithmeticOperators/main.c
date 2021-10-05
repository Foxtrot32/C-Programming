/* C Program that Calculates Quotient, Remainder, Addition, Subtraction and Muliplication of two number
*  By Rohan S Gurumurthy */
#include<stdio.h>
int main()
{
	int A, B;
	scanf_s("%d %d", &A, &B); //Getting Inputs
	printf("The Addition of A and B gives value %d.\n", A + B); //Adding Two Numbers
	printf("The Subtraction of A and B gives value %d.\n", A - B);
	printf("The Multiplication of A and B gives value %d.\n", A * B);
	printf("The Quotient of A/B is %d.\n", A / B);
	printf("The Remainder of A/B is %d", A % B);
	return 0;
}
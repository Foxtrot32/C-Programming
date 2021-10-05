#include<stdio.h>
int main()
{
	int A, B;
	scanf_s("%d %d", &A, &B);
	printf("\nThe value of A and B under BITWISE OR Operator is %d.\n", A | B);
	printf("The value of A and B under BITWISE AND Operator is %d.\n", A & B);
	printf("The value of A and B under BITWISE XOR Operator is %d.\n", A ^ B);
	printf("The value of A under BITWISE NOT Operator is %d.\n", ~A);
	printf("The value of B under BITWISE NOT Operator is %d.\n", ~B);
	return 0;
}
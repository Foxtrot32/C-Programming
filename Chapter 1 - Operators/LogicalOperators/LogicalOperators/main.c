#include<stdio.h>
int main()
{
	int A, B;
	scanf_s("%d %d", &A, &B);
	printf("\nThe Result of A and B under OR gate is %d.\n", A || B);
	printf("The Result of A and B under AND gate is %d\n", A && B);
	printf("The Result of A under NOT operator is %d.\n", !A);
	printf("The Result of B under NOT gate is %d", !B);
	return 0;
}
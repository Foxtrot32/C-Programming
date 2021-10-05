#include<stdio.h>
int main()
{
	int A, B, C, D;
	printf("Enter positive value for A:\n");
	scanf_s("%d", &A);
	printf("\nEnter negative value for B:\n");
	scanf_s("%d", &B);
	C = A;
	D = B;
	printf("The value of C after Negation is %d \n",-C);
	printf("The value of D after applying unary+ is %d\n", D);
	return 0;
}
#include<stdio.h>
int main()
{
	int A;
	scanf_s("%d", &A);
	printf("The value of A is %d.\n", A);
	printf("The value of A after incrementing using postfix operators is %d.\n", A++);
	printf("Finally, The value of A is %d.\n", A);
	printf("The value of A after decreasing using postfix operator is %d.\n", A--);
	printf("After Changes, The values of A is %d", A);
	return 0;
}
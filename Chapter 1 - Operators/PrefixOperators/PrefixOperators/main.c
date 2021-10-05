#include<stdio.h>
int main()
{
	int A;
	scanf_s("%d", &A);
	printf("The value of A is %d.\n", A);
	printf("The value of A after Incrementing using Prefix is %d.\n", ++A);
	printf("Finally, The value of A is %d.\n", A);
	printf("The value of A after decreasing using Prefix is %d.\n", --A);
	return 0;
}
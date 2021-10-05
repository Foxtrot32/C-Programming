/* C Program to print first N Numbers using while loop*/
#include<stdio.h>
int main()
{
	int N;
	scanf_s("%d", &N);
	while (N >= 0)
	{
		printf("%d\n", N);
		N--;
	}
	return 0;
}
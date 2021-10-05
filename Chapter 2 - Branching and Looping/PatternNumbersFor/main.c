/*C Program to write a pattern of numbers*/
#include<stdio.h>
int main()
{
	int i, j,N;
	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}
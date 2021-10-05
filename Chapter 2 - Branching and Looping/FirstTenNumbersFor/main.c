/* C Program to print First N Numbers*/
#include<stdio.h>
int main()
{
	int i, N;
	scanf_s("%d", &N);
	printf("\n THE FIRST %d NUMBERS ARE:- ", N);
	for (i = 0/*Loop Initialization*/; i <= N/*Controlling Condition*/; i++/*Variable update*/)
	{
		printf("%d\n",i);
	}
	return 0;
}
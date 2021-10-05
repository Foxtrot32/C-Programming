/* C Program to check if a number is positive or negative*/
#include<stdio.h>
int main()
{
	int N;
	printf("ENTER NUMBER:\n");
	scanf_s("%d", &N);
	if (N >= 0)  //Checks if the number is positive
	{
		printf("\nTHE NUMBER IS POSITIVE!"); //If so, This block is executed
	}
	else
	{
		printf("\nTHE NUMBER IS NEGATIVE!"); //Else, If block is skipped and this is executed
	}
	return 0;
}
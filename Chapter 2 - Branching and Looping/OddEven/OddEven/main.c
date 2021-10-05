/*C Program to check if a number is odd or even*/
#include<stdio.h>
int main()
{
	int N;
	printf("ENTER A NUMBER:\n");
	scanf_s("%d", &N);
	if (N % 2 == 0) //To Check if the number is even
	{
		printf("\nTHE NUMBER IS EVEN!");
	}
	else  //Alternate Senario where the condition does not satisfy 
	{
		printf("\nTHE NUMBER IS ODD!");
	}
	return 0;
}
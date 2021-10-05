/*C Program to verify if a number is positive*/
#include<stdio.h>
int main()
{
	int N;
	printf("ENTER NUMBER: \n");
	scanf_s("%d", &N);  //Getting Input Value
	if (N >= 0)   //Condition to check if the number is positive 
	{
		printf("\nTHE GIVEN NUMBER IS POSITIVE!"); //The Result is displayed in the statement block 
	}
	return 0;
}

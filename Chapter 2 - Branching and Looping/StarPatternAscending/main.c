/*C Program to display a pattern of stars*/
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 0; i < 5; i++) //For Each Row 
	{
		for (j = 0; j <= i; j++) //No of stars that get printed 
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
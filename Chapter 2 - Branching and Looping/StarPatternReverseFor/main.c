/*C Program to print pattern in reverse*/
#include<stdio.h>
int main()
{
	int i, j, k;
	for (i = 0; i < 5; i++)
	{
		for (j = 5; j >= i; j++)
		{
			printf(" ");
			for (k = 0; k <= j; k++)
				print("*");
			printf("\n");
		}
	}
	
	return 0;
}
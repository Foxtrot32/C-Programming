/*C Program to find biggest of three numbers */
#include<stdio.h>
int main()
{
	int A, B, C;                     //Declaring three variables
	printf("ENTER THREE VALUES:\n");
	scanf_s("%d %d %d", &A, &B, &C); //Getting Input for A,B and C
	if (A > B && A > C)              //Checks if A is the biggest of the three
	{
		printf("A IS THE LARGEST NUMBER FOLLOWED BY");
		if (B > C)                  //Checks if B is bigger than C 
		{
			printf(" B AND C\n");
		}
		else
		{
			printf(" C AND B\n");
		}
	}

	if (B > A && B > C)            //Checks if B is the biggest of the three
	{
		printf("B IS THE LARGEST NUMBER FOLLOWED BY");
		if (A > C)                //Checks if A is bigger than C
		{
			printf(" A AND C\n");
		}
		else
		{
			printf(" C AND A\n");
		}
	}

	if (C > B && C > A)  //Checks if C is the biggest of the three
	{
		printf("C IS THE LARGEST NUMBER FOLLOWED BY");
		if (A > B)       //Checks if A is the biggest between A and B 
		{
			printf(" A AND B\n");
		}
		else
		{
			printf(" B AND A\n");
		}
	}

	return 0;
}
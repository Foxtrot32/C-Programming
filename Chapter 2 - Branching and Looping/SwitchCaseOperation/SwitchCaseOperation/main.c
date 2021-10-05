/*C Program to demonstrate the use of Switch Case */
#include<stdio.h>
int main()
{
	char A1;
	int A, B;
	printf("ENTER A OPERATION[+,-,*,/,%]:\n");
	scanf_s("%c", &A1);
	printf("ENTER VALUES FOR A AND B:\n");
	scanf_s("%d %d", &A, &B);
	
	switch (A1)
	{
	case '+': printf("THE SUM OF A AND B IS %d", A + B);
		break;

	case '-': printf("THE DIFFERENCE OF A AND B IS %d", A - B);
		break;

	case '*': printf("THE PRODUCT OF A AND B IS %d", A * B);
		break;

	case '/': printf("THE QUOTIENT OF A/B IS %d", A / B);
		break;

	case '%': printf("THE REMAINDER OF A/B IS %d", A % B);
		break;

	default: printf("WRONG SYMBOL ENTERED!");
	}
	return 0;
}
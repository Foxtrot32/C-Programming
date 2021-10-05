/*C Program to demonstrate the use of fall through in switch case*/
#include<stdio.h>
int main()
{
	char A1;
	scanf_s("%c", &A1);
	switch (A1)                               //Depending on the value the case is chosen 
	{
	case 'a': printf("THE IS A VOWEL\n");
		break;
	case 'b': printf("THIS IS NOT A VOWEL\n"); //No Break Statement is used here
	default: printf("IT IS A CHARACTER");
	}
	return 0;
}
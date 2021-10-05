/*
* C Program to demonstrate the use of getchar() and putchar()
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaration
	char String[100] = "\0";

	//Getting input 
	int i = 0;
	char ch = getchar();
	while (ch != '*')
	{
		String[i] = ch;
		i++;
		ch = getchar();
	}

	//Printing the output
	int j = 0;
	while (j <= i)
	{
		putchar(String[j]);
		j++;
	}
}
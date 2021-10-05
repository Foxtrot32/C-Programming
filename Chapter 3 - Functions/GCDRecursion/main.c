#include <stdio.h>

//Declaring function prototype
int GCD(int N, int M);

//Main Function
int main(void)
{
	//Declaring integer variables
	int N, M;

	//Getting input from user
	scanf("%i %i", &N, &M);

	//Passing through Function and getting result
	int Result = GCD(N, M);

	//Printing the result
	printf("Result = %i", Result);
}

int GCD(int N, int M)
{
	int Res = N % M;

	//Deciding the result
	if (Res == 0)
	{
		return M;
	}
	else
	{
		GCD(M, Res);
	}
}
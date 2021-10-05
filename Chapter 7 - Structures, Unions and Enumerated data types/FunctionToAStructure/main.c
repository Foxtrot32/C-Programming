/*
* C Program to demonstrate the use of Function in relation to Structures
* By Rohan S Gurumurthy
*/
#include <stdio.h>
#include <math.h>

//Structure Declaration 
typedef struct Coordinate
{
	int x;
	int y;
	int Sum;
}Values;

Values FindDistance(Values X1, Values Y1);

//Main Function 
int main(void)
{
	//Structure Variables Declaration 
	Values X1, Y1, Z1;

	//Getting input from user
	scanf("%i %i", &X1.x, &X1.y);
	scanf("%i %i", &Y1.x, &Y1.y);

	//Initializing Sum to 0
	X1.Sum = 0;
	Y1.Sum = 0;

	//Passing Structures through function 
	Z1 = FindDistance(X1, Y1);
	
	//Printing the result
	printf("Result = %i", Z1.Sum);
}


Values FindDistance(Values X1, Values Y1)
{
	//Variable Declaration
	Values Res;
	int SumX, SumY, Result = 0;

	//Calculating Distance 
	SumX = Y1.x - X1.x;
	SumY = Y1.y - X1.y;
	Result = sqrt(pow(SumX, 2) + pow(SumY, 2));

	//Assigning Sum to Result
	Res.Sum = Result;
	Res.x = SumX;
	Res.y = SumY;

	return Res;
}
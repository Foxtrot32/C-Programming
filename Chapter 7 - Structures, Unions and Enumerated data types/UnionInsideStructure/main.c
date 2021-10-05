/*
* C Program to show the usefulness of Union inside a structure
* By Rohan S Gurumurthy
*/
#include <stdio.h>

//Structure Declaration 
typedef struct Student
{
	union 
	{
		char Name[100];
		int RollNo;
	};
	int Marks;
}Student;

//Main Function 
int main(void)
{
	//Structure Variable Declaration 
	Student Student2;

	//Variable Declaration
	int N;

	//Getting input for choice 
	scanf("%i", &N);

	//Selecting Branch based on Choice
	if (N == 1)
	{
		scanf("%s", Student2.Name);
		scanf("%i", &Student2.Marks);

		//Printing the result
		printf("%s %i", Student2.Name, Student2.Marks);
	}
	else
	{
		scanf("%i", &Student2.RollNo);
		scanf("%i", &Student2.Marks);

		//Printing the result
		printf("%i %i", Student2.RollNo, Student2.Marks);
	}
}
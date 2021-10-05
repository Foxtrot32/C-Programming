/*
* C Program to implement an Array of Structures
* By Rohan S Gurumurthy
*/
#include <stdio.h>
#include <stdlib.h>

//Structure Declaration 
typedef struct Student
{
	char Name[100];
	char RegNo[100];

	struct DOB
	{
		int Date;
		int Month;
		int Year;
	}DOB;
}Student;

//Main Function 
int main(void)
{
	//Declaring Array of Structure
	Student Student1[3];

	//Getting input from user
	for (int i = 0; i < 3; i++)
	{
		gets(Student1[i].Name);
		gets(Student1[i].RegNo);
		scanf("%i %i %i", &Student1[i].DOB.Date, &Student1[i].DOB.Month, & Student1[i].DOB.Year);
	}


	//Printing the Results
	for (int i = 0; i < 3; i++)
	{
		printf("\n STUDENT %i\n", i);
		printf("Name : %s\n", Student1[i].Name);
		printf("Registration Number : %s\n", Student1[i].RegNo);
		printf("Date of Birth : %i/%i/%i\n", Student1[i].DOB.Date, Student1[i].DOB.Month, Student1[i].DOB.Year);
	}
}
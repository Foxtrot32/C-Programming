/*
* C Program to demonstrate Nested Structure
* By Rohan S Gurumurthy
*/
#include <stdio.h>

//Structure
typedef struct Student
{
	char Name[100];
	char RegistrationNumber[100];

	//Nested Structure
	struct DateOfBirth
	{
		int Year;
		int Month;
		int Date;
	}DOB;

}Student;

//Main Function 
int main(void)
{
	//Declaration 
	Student Student1;

	//Getting input from the user
	gets(Student1.Name);
	gets(Student1.RegistrationNumber);
	scanf("%i %i %i", &Student1.DOB.Date, &Student1.DOB.Month, &Student1.DOB.Year);

	//Printing the results
	printf("Name : %s\n", Student1.Name);
	printf("Registration Number : %s\n", Student1.RegistrationNumber);
	printf("Date of Birth : %i/%i/%i", Student1.DOB.Date, Student1.DOB.Month, Student1.DOB.Year);
}
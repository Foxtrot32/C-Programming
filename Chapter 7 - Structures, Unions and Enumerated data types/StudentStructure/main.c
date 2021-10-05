/*
* C Program to demonstrate the use of structure
* By Rohan S Gurumurthy 
*/
#include <stdio.h>

//Structure declaration 
typedef struct Student
{
	char Name[100];
	int RollNo;
	int Class;
}Student;

int main(void)
{
	//Declaring Structure Variable
	 Student Student1;

	//Getting input from user
	gets(Student1.Name);
	scanf("%i", &Student1.RollNo);
	scanf("%i", &Student1.Class);

	//Printing the results
	printf("Name : %s", Student1.Name);
	printf("\nRoll Number : %i", Student1.RollNo);
	printf("\nClass : %i", Student1.Class);

}
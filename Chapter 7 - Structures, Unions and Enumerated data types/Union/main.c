/*
* C Program to demonstrate Unions 
* By Rohan S Gurumurthy
*/
#include <stdio.h>

//Union Declaration
union Student
{
	char Name[100];
	int RollNo;
}Class;

//Main Function
int main(void)
{
	//Union Variable Declatation 
	//Student Class;

	//Getting input from the user and printing it 
	gets(Class.Name);
	printf("Name : %s\n", Class.Name);

	scanf("%i", &Class.RollNo);
	printf("Roll Number : %d", Class.RollNo);
}
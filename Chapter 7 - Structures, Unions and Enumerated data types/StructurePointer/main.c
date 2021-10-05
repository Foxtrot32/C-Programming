/*
* C Program to demonstrate the use of structure pointers
* By Rohan S Gurumurthy
*/
#include <stdio.h>
#include <stdlib.h>
//Structure Declaration 
typedef struct Student
{
	char Name[100];
	char RegNo[100];
	int Class;
} Class;

//Main Function 
int main(void)
{
	//Structure Variable Declaration 
	Class* Class1 = (Class*)(malloc(sizeof(Class)));

	//Getting input from user
		gets(Class1->Name);
		gets(Class1->RegNo);
		scanf("%i", &Class1->Class);

	//Printing the results
		printf("%s\n", Class1->Name);
		printf("%s\n", Class1->RegNo);
		printf("%i", Class1->Class);

}
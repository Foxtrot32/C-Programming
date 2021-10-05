/*
* C Program to demonstrate Array of Structures using Pointers
* By Rohan S Gurumurthy
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <malloc.h>

//Struture Declaration 
struct Student
{
	char Name[100];
	int RollNo;
};

int main(void)
{
	//Structure Variable Declaration 
	struct Student* Class1[2];

	//Getting input for Structures
	for (int i = 0; i < 2; i++)
	{
		Class1[i] = (struct Student*)malloc(sizeof(struct Student));
		scanf("%s", Class1[i]->Name);
		scanf("%i", &Class1[i]->RollNo);
		fflush(stdin);
	}

	//Printing the result
	for (int i = 0; i < 2; i++)
	{
		printf("STUDENT %i\n", i + 1);
		puts(Class1[i]->Name);
		printf("Roll Number : %i\n", Class1[i]->RollNo);
	}
}
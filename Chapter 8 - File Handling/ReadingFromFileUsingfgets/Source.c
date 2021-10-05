/*
* C Program to read data from a file 
* By Rohan S Gurumurthy
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Structure Declaration 
typedef struct Student
{
	char Name[100];
	char Section;
	int Number;
}Student;

//Funtion Prototype
void GetTheData(char String[], int i);

int main(void)
{
	//Declaring Variables 
	char String[100];
	int Count = 0;

	//Declaring and Opening File Variable
	FILE* file = fopen("Result.txt", "r");

	//Checking if the file is open or not 
	if (file == NULL)
	{
		printf("File Failed to Open!\n");
		return -1;
	}

	//Reading from the file and counting the lines
	while (!feof(file))
	{
		fgets(String, 100, file);
		Count++;
	}

	//Rewinding the file to start from first 
	rewind(file);

	for (int i = 0; i < Count; i++)
	{
		fgets(String, 100, file);
		int N = ftell(file);
		printf("%d", N);
		GetTheData(String, i);
		
	}

	//Printing the result
	printf("Number of Lines = %d", Count);

	//Closing the file
	fclose(file);
}

void GetTheData(char String[], int i)
{
	Student Class1[3];
	int  j;

	for (j = 0; String[j] != ','; j++)
	{
		Class1[i].Name[j] = String[j];
	}
	Class1[i].Name[j] = '\0';

	Class1[i].Section = String[j + 2];
	
	char TempString[5] = "\0";
	for (int k = j + 4; String[k] != '\0'; k++)
	{
		TempString[k - (j + 4)] += String[k];
	}

	Class1[i].Number = atoi(TempString);

	//Printing the result
	printf("STUDENT %i\n\n", i);
	printf("Name of the Student : ");
	puts(Class1[i].Name);
	printf("Section : %c Roll Number : %d", Class1[i].Section, Class1[i].Number);
	printf("\n");

}
/*
* C Program to demonstrate the use of fscanf() in reading data from files
* By Rohan S Gurumurthy
*/
#include <stdio.h>

//Structure Declaration
struct Student
{
	char Name[100];
	char Sex;
	int RollNo;
}Student1;

int main(void)
{
	//File Declaration and Opening 
	FILE* file = fopen("Data.txt", "r");

	//Checking for the presence of file in location 
	if (file == NULL)
	{
		perror("This is an error");
		return 1;
	}

	//Reading from the file and printing the result 
	while (!feof(file))
	{
		fscanf(file, "%10s %c %d", Student1.Name, &Student1.Sex, &Student1.RollNo);

		//Printing the result
		printf("NAME: %s\n", Student1.Name);
		printf("SEX: %c ROLL NO: %d", Student1.Sex, Student1.RollNo);
		printf("\n");

	}

	//Closing the file
	fclose(file);
}

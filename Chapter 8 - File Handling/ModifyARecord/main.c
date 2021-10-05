/*
* C Program to modify a record
* By Rohan S Gurumurthy
*/
#include <stdio.h>

//Structure Declaration 
typedef struct Student
{
	char Name[100];
	int RollNo;
}STUDENT;

int main(void)
{
	//Variable Declaration 
	int RollNumber;

	//Structure Variable Declaration 
	STUDENT Student1, Student2 = { "", 0 };

	//File Pointer Declaration 
	FILE* file1 = fopen("Text.txt", "r");
	FILE* file2 = fopen("Temp.txt", "w");

	//Checking for file
	if (file1 == NULL)
	{
		perror("Error in file1");
		return 1;
	}

	//Getting input from user
	scanf("%d", &RollNumber);

	//Reading from the file
	while (!feof(file1))
	{
		fscanf(file1, "%10s %d", Student1.Name, &Student1.RollNo);

		if (Student1.RollNo != RollNumber)
		{
			fprintf(file2, "%s %d", Student1.Name, Student1.RollNo);
		}
		else if (Student1.RollNo = RollNumber)
		{
			scanf("%s %d", Student2.Name, &Student2.RollNo);

			fprintf(file2, "%s %d", Student2.Name, Student2.RollNo);
		}
	}

	fclose(file1);
	fclose(file2);

	//Copying the contents back to file
	file1 = fopen("Text.txt", "w");
	file2 = fopen("Temp.txt", "r");

	//Checking for file
	if (file2 == NULL)
	{
		perror("Error in File2");
		return 1;
	}

	while (!feof(file2))
	{
		fscanf(file2, "%10s %d", Student1.Name, &Student1.RollNo);
		fprintf(file1, "%s %d", Student1.Name, Student1.RollNo);
	}

	//Closing the files
	fclose(file1);
	fclose(file2);
}
/*
* C Program to delete a record from the text file
* By Rohan S Gurumurthy
*/
#include <stdio.h>

//Structure Declaration
typedef struct Student
{
	char Name[100];
	int RollNo;
}STUDENT;

//Main Function 
int main(void)
{
	//Structure Variable Declaration 
	STUDENT Student1 = { "", 0 };

	//File Pointer Declaration 
	FILE* file = fopen("Text.txt", "r");
	FILE* file1 = fopen("Temp.txt", "w");

	//Checking for file
	if (file == NULL)
	{
		perror("File");
		return 1;
	}

	//Copying the data except for the deleted record

	//Variable Declaratiom
	int RollNumber, i = 0;

	//Getting input from user
	scanf("%d", &RollNumber);

	while (!feof(file))
	{
		fscanf(file, "%10s %d", Student1.Name, &Student1.RollNo);

		if (Student1.RollNo != RollNumber)
		{
			fprintf(file1, "%s %d", Student1.Name, Student1.RollNo);
			i++;
		}
		else
		{
			i++;
		}
	}

	fclose(file);
	fclose(file1);

	//Copying the contents back to original file
	file = fopen("Text.txt", "w");
	file1 = fopen("Temp.txt", "r");

	//Checking for presence of file
	if (file1 == NULL)
	{
		perror("Error");
		return 1;
	}

	char String[100];
	while (!feof(file1))
	{
		fread(String, 100, 1, file1);
		fwrite(String, 100, 1, file);
	}

}
/*
* C Program to write and Read from a binary file
* By Rohan S Gurumurthy
*/
#include <stdio.h>
#include <stdlib.h>

//Structure Declaration 
typedef struct Student
{
	char Name[100];
	int Age;
}STUDENT;

//Main Function
int main(void)
{
	//File Pointer Declaration
	FILE* file1 = fopen("Text.txt", "wb");

	//Variable Declaration
	int N;

	//Getting input from user
	scanf("%i", &N);

	//Structure Variable Declaration 
	STUDENT* Student1[10];

	//Getting input for Struture Elements
	for (int i = 0; i < N; i++)
	{
		Student1[i] = (STUDENT*)malloc(sizeof(STUDENT));
		
		scanf("%s", Student1[i]->Name);
		scanf("%i", &Student1[i]->Age);
		fflush(stdin);

		//Writing to file
		fprintf(file1, "%s %d", Student1[i]->Name, Student1[i]->Age);
	}

	//Closing the file
	fclose(file1);

	//Reading from file
	file1 = fopen("Text.txt", "rb");

	//Checking for file
	if (file1 == NULL)
	{
		perror("File 1");
		return 1;
	}

	//Reading from file
	int i = 0;
	while (!feof(file1))
	{
		fscanf(file1, "%10s %d", Student1[i]->Name, &Student1[i]->Age);

		printf("STUDENT %i\n", i);
		printf("NAME OF THE STUDENT : %s\n", Student1[i]->Name);
		printf("AGE : %d\n", Student1[i]->Age);
		printf("_______________________________________\n");

		i++;
	}
}
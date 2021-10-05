/*
* C Program to compare the contents of a file
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	//Variable Declaration 
	char String1[10] = " ", String2[10] = " ";

	//File Pointer Declaration 
	FILE *file1 = fopen("Read1.txt", "r");
	FILE* file2 = fopen("Read2.txt", "r");

	//Checking for the presence of files
	if (file1 == NULL || file2 == NULL)
	{
		perror("This Program cannot be executed");
		return 1;
	}

	//Comparing the files
	int Flag = 0;
	while (!feof(file1) && !feof(file2))
	{
		fread(String1, 10, 1, file1);
		fread(String2, 10, 1, file2);

		if (strcmp(String1, String2) != 0)
		{
			printf("The Contents of the file are not similar!");
			Flag = 1;
			break;
		}
	}

	if (Flag == 0)
	{
		printf("The Contents of the file are similar!");
	}
}
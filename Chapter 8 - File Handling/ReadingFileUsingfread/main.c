/*
* C Program to read from a text file using fread() function
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaring Variables
	size_t SizeString;
	char String[100];

	//Declaring File Pointer Variable and Opening the File 
	FILE* file = fopen("Resort.txt", "r");

	//Checking if the file is empty
	if (file == NULL)
	{
		printf("File is empty!\n");
		return -1;
	}

	//Reading from the file
	while (!feof(file))
	{
	    fread(String, 100, 1, file);
		printf("%s", String);
	}

	//Closing the file
	rewind(file);
	fclose(file);
}
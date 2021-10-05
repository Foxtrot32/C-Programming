/*
* C Program to copy the contents of a file into another file 
* By Rohan S Gurumurthy
*/

#include <stdio.h>
int main(void)
{
	//Variable Declaration
	char String[100];

	//File Pointer Declaration 
	FILE* file1 = fopen("Read.txt", "r");
	FILE* file2 = fopen("Write.txt", "w");

	//Checking for presence of file
	if (file1 == NULL)
	{
		perror("Reading File Not Present!");
		return 1;
	}

	//Copying the contents of the file
	while (!feof(file1))
	{
		fread(String, 100, 1, file1);
		
		//Writing the String into the file
		fwrite(String, 100, 1, file2);
	}

	//Closing the files
	fclose(file1);
	fclose(file2);
}
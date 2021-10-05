/*
* C Program to read from a file character by character using fgetc() function
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Declaring File Pointer to access file
	FILE* file = fopen("Entry.txt.txt", "r");

	//Checking for File
	if (file == NULL)
	{
		printf("FILE NOT FOUND!\n");
		return 1;
	}

	//Getting data from the file
	char ch;
	while (!feof(file))
	{
		ch = (char)fgetc(file);
		printf("%c", ch);
	}

	//Closing the file
	fclose(file);
}
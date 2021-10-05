/*
* C Program to write into a file using fputs()
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Variable Declaration 
	char ch = "A";

	//File Pointer Declaration 
	FILE* file = fopen("Write.txt", "w");

	//Checking for presence of file
	if (file == NULL)
	{
		printf("FILE NOT FOUND!");
		return 1;
	}

	//Getting input and writting data into the file
	while (!feof(file) && ch != 'q')
	{
		scanf("%c", &ch);
		fputc(ch, file);
	}

	//Closing the File
	fclose(file);
}
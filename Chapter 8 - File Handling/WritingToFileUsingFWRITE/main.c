/*
* C Program to demonstrate the use of fwrite() function 
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//String Declaration
	char String[100] = "\0";

	//File Pointer Declaration 
	FILE* file = fopen("Write.txt", "w");

	//Checking for the presence of file
	if (file == NULL)
	{
		printf("File is not Present!");
		return 1;
	}

	//Getting input from user
	gets(String);

	//Writting into File
	fwrite(String, 100, 1, file);

	//Closing the file
	fclose(file);
}

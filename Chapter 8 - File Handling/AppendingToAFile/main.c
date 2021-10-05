/*
* C Program demonstrating how to append a file
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Variable Declaration 
	char String[100] = " ";

	//File Pointer Declaration 
	FILE* file = fopen("Append.txt", "a");

	//Checking for file
	if (file == NULL)
	{
		perror("Error");
		return 1;
	}

	//Appending to the file
	gets(String);
	fwrite(String, 100, 1, file);

	//Closing the file
	fclose(file);
}
/*
* C Program to write into a Text File using fputs() function 
* By Rohan S Gurumurthy
*/
#include <stdio.h>
int main(void)
{
	//Variable Declaration 
	char String[100];
	
	//Getting input from user
	gets(String);

	//File Pointer Declaration and File Opening 
	FILE* file = fopen("Write.txt", "w");

	//Checking for File
	if (file == NULL)
	{
		printf("FILE NOT FOUND!");
		return 1;
	}

	//Reading to file
	fputs(String, file);

	//Closing the file
	fclose(file);
}
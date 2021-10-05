/*
* C Program to demonstrate the use of fprintf() function in Files
* By Rohan S Gurumurthy
*/
#include <stdio.h>

//Structure Definition 
typedef struct Person
{
	char Name[100];
	char Sex;
	int Age;
}Group;

int main(void)
{
	//Strcture Variable Declaration 
	Group Member;

	//Getting input from user
	gets(Member.Name);
	fflush(stdin);
	scanf("%c %d", &Member.Sex, &Member.Age);

	//File Pointer Declaration and File Opening
	FILE* file = fopen("Write.txt", "w");

	//Checking for presence of file
	if (file == NULL)
	{
		perror("Howdy! You can't run this code");
		return 1;
	}

	//Writting into the file
	fprintf(file, "%s %c %d", Member.Name, Member.Sex, Member.Age);

	//Closing the file
	fclose(file);
}

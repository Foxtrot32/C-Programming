/* C Program to delete a substrinf from the main string 
* By Rohan S Gurumurthy
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	//Declaration 
	char String[100] = "", SubString[50] = "";

	//Getting input from user 
	gets(String);
	gets(SubString);

	//Checking for the presence of SubString in String
	int pos = 0;
	if (strstr(String, SubString) != NULL)
	{
		for (int i = 0; String[i] != '\0'; i++)
		{
			if (String[i] == SubString[0])
			{
				if (strncmp(&String[i], SubString, strlen(SubString) - 1) == 0)
				{
					pos = i;
					break;
				 }
			}
		}
	}

	if (pos == 0)
	{
		printf("STRING NOT FOUND!");
		return 1;
	}
	else
	{
		for (int i = pos; String[i] != '\0'; i++)
		{
			String[i] = String[i + strlen(SubString)];
		}

		printf("%s", String);
	}
}
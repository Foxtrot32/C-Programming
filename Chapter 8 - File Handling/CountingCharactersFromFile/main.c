#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    //Variable Declaration
    int CharacterCount = 0;
    char String[100] = " ";

    //Checking for the presence of arguement-values
    if (argc <= 1)
    {
        printf("Arguements not entered on command prompt");
        return 1;
    }

    //File Pointer Declaration 
    FILE* file = fopen(argv[1], "r");

    //Checking for the presence of file
    if (file == NULL)
    {
        perror("Error");
        return 1;
    }

    //Counting the character
    while (!feof(file))
    {
        fread(String, 100, 1, file);

        //Counting the characters from the string
        for (int i = 0; i < strlen(String); i++)
        {
            if ((isalnum(String[i]) || ispunct(String[i])) || (isspace(String[i]) && String[i + 1] != ' '))
            {
                CharacterCount++;
            }
        }
    }

    //Printing the result
    printf("No of Characters present in file = %d", CharacterCount);

    //Closing the file
    fclose(file);

    return 0;
}
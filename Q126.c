#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[50];
    char ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error! File does not exist.");
    }
    else
    {
        printf("\nFile contents:\n");

        while ((ch = fgetc(fp)) != EOF)
        {
            printf("%c", ch);
        }

        fclose(fp);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];

    fp = fopen("info.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    printf("Enter a line of text: ");
    getchar();
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Text successfully appended to the file.");

    return 0;
}

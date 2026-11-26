#include <stdio.h>

int main()
{
    FILE *src, *dest;
    char source[50], destination[50];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", source);

    printf("Enter destination filename: ");
    scanf("%s", destination);

    src = fopen(source, "r");

    if (src == NULL)
    {
        printf("Source file cannot be opened.");
        return 1;
    }

    dest = fopen(destination, "w");

    if (dest == NULL)
    {
        printf("Destination file cannot be opened.");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    printf("File copied successfully.");

    fclose(src);
    fclose(dest);

    return 0;
}
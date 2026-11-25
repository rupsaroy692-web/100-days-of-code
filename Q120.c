#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert the first character to uppercase
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;

    // Convert remaining characters to lowercase
    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    printf("Sentence case: %s", str);

    return 0;
}

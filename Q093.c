#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i, count[256] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    if(strlen(str1) != strlen(str2))
    {
        printf("Strings are not anagrams.");
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] != '\n')
            count[(unsigned char)str1[i]]++;

        if(str2[i] != '\n')
            count[(unsigned char)str2[i]]--;
    }

    for(i = 0; i < 256; i++)
    {
        if(count[i] != 0)
        {
            printf("Strings are not anagrams.");
            return 0;
        }
    }

    printf("Strings are anagrams.");

    return 0;
}

#include <stdio.h>

int main()
{
    char str[200], word[100], longest[100];
    int i, j = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            word[j] = '\0';

            if(j > max)
            {
                max = j;

                for(int k = 0; k <= j; k++)
                {
                    longest[k] = word[k];
                }
            }

            j = 0;

            if(str[i] == '\0')
                break;
        }
    }

    printf("Longest word: %s", longest);

    return 0;
}

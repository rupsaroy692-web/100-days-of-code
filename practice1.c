#include <stdio.h>
#include <string.h>

int main (void)
{
    char s1[50];
    char s2[50]; 

    printf("enter the first word:");
    scanf("%49s" , s1);

    printf("enter the second word:");
    scanf("549s" , s2);

    if (strcmp(s1 , s2) == 0)
    {
        printf("strings are equal.\n");
    }
    else 
    {
        printf("strings are different.\n");
    }

    return 0;

}
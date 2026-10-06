#include <stdio.h>

int main() {
    char ch ;

    printf("enter a character:");
    scanf("%c" , &ch);

    if (ch >= 'A' && ch <= 'Z')
    printf("its an upper case alphabet");

    else if (ch >= 'a' && ch <= 'z')
    printf("its a lower case alphabet");

    else if (ch >= '1' && ch <='9')
    printf("its a digit");

    else 
    printf("its a special character");

    return 0;

}

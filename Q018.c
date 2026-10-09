#include <stdio.h>

int main() {
    int n ;
    printf("enter n(0 to 100):");
    scanf("%d" , &n);

    if (n<=100 && n>=90)
    printf("grade A");

     else if (n>=80 && n<=89)
    printf("grade B");

     else if (n>=70 && n<=79)
    printf("grade C");

    else if (n>=60 && n<=69)
    printf("grade D");

    else if ("n>=0 && n<=60")
    printf("grade F");

    else
    printf("invalid input");

    return 0;

}

#include <stdio.h>

int main() {
    int year;

    printf("enter year:");
    scanf("%d" , &year);

    (year%400==0 || (year%4==0 && year%100!=0))
    ? printf("its a leap year" , year)
    : printf("its not a leap year" , year);

    return 0;

}

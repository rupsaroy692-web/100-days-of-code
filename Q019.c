#include <stdio.h>

int main() {
    int a , b , c;

    printf ("enter the three sides of the triangle:");
    scanf("%d %d %d" , &a , &b , &c);

    if (a<=0 || b<=0 || c<=0 || a+b<=c || a+c<=b || b+c<=a)
    printf("invalid input");

    else if (a==b && b==c)
    printf("equilateral triangle");

    else if (a==b || b==c || a==c)
    printf("isoceles triangle");

    else
    printf("scalene triangle");

    return 0;

}

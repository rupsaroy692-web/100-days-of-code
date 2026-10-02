#include <stdio.h>

int main() {
    int a , b , temp;

    printf("enter two numbers:");
    scanf("%d %d" , &a , &b);

    temp = a;
    a = b;
    b = temp;

    printf("after swapping:\n");
    printf("first number = %d\n" , &a);
    printf("second number = %d\n" , &b);

    return 0;

}

#include <stdio.h>

int main() {
    float num1 , num2 ;

    printf("enter two numbers:");
    scanf("%f %f", &num1 , &num2);

    printf("sum = %.2f\n", num1 + num2);
    printf("difference = %.2f\n" , num1 - num2 );
    printf("product = %.2f\n", num1 * num2);

    if (num2 != 0)
    printf("quotient = %.2f\n", num1 / num2);
    else
    printf("quotient = cannot divide by zero\n");

    return 0;

}

#include <stdio.h>

int main() {
    int a , b;
    char op;

    printf("enter two integers:");
    scanf("%d %d", &a ,&b);

    printf("enter an operator(+,-.*,/,%%):");
    scanf("%c", &op);

    switch (op)
    {
        case '+':
        printf("result=%d\n" , a+b);
        break;

        case'-':
        printf("result=%d\n" , a-b);
        break;

        case'*':
        printf("result=%d\n" , a*b);
        break;

        case '/':
        if (b!=0)
        printf("result = %.2f\n" , (float)a/b);
        else
        printf("division by zero is not possible");
        break;

        case'%':
        if (b!=0)
        printf("result = %.2f\n" , a%b);
        else
        printf("modulus by zero not possible");
        break;

        default:
        printf("invalid operator\n");
    }

    return 0;

}

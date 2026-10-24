#include <stdio.h>

int main() {
    int a , b , i , lcm;

    printf("enter two numbers:");
    scanf("%d %d", &a , &b);

    lcm=(a>b)?a:b;

    for (i=lcm; ;i++)
    {
        if(i%a==0&&i%b==0)
        {
            lcm=i;
            break;
        }
    }

printf("lcm=%d", lcm);

    return 0;

}

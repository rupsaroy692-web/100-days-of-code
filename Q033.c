#include <stdio.h>

int main() {
    int n , original , rem , sum=0;

    printf("enter a number");
    scanf("%d", &n);

    original=n;

    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }

    if(original==sum)
    printf("its an armstrong number");

    else
    printf("its not an armstrong number");

    return 0;

}

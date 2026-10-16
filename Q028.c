#include <stdio.h>

int main() {
    int n , i;
    long long product = 1;

    printf("enter the value of n:");
    scanf("%d" , &n);

    for (i=2; i<=n; i+=2)
    {
        product = product * i ;

    }

    printf("product of even numbers from 1 to %d = %lld" , n , product );
    return 0;

}

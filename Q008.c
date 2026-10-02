#include <stdio.h>

int main() {
    int n, i , sum=0 ;
    printf("enter the value of n :");
    scanf("%d" , &n);

    for (i = 1 ; i<=n ; i++);
    {
        sum = n + i ;

    }

    printf("sum of first %d natural numbers : %d\n" , n , sum);
    

    return 0;

}

#include <stdio.h>

int main() {
    int i , j ,n , count;

    printf("enter the value of N:");
    scanf("%d", &n);

    printf("prime numbers from 1 to %d are:\n" , n);

    for(i=2; i<=n; i++)
    {
        count=0;

        for (j=2; j<=i; j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d" , i);
        }
    }

    return 0;

}

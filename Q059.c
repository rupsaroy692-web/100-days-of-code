#include <stdio.h>

int main() {
    int a[100] , i ,n , odd=0, even=0;

    printf("enter the number of elements:");
    scanf("%d" , &n);

    printf("enter the array elements:\n");

    for(i=0; i<n; i++)
    {
        scanf("%d" , &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else 
        {
            odd++;
        }
    }

    printf("total even numbers=%d\n" , even);
    printf("total odd numbers=%d\n" , odd);

    return 0;

}

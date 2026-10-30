#include <stdio.h>

int main() {
    int a[100], n , i;

    printf("enter the numbers of elements:");
    scanf("%d" , &n);

    printf("enter %d elements:\n" , n);

    for(i=0; i<n; i++)
    {
        scanf("%d" , &a[i]);
    }

    printf("the elements of array are:\n");

    for(i=0; i<n; i++)
    {
        printf("%d", &a[i]);
    }

    return 0;

}

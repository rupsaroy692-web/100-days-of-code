#include <stdio.h>

int main() {
    int a[100] , n, i , search, found=0;

    printf("entr the number of elements:");
    scanf("%d" , &n);

    printf("enter the array of elements:\n");

    for(i=0; i<n; i++)
    {
        scanf("%d" , &a[i]);
    }

    printf("enter the elements to search:");
    scanf("%d" , &search);

    for(i=0; i<n; i++)
    {
        if(a[i]==search)
        {
            found=1;
            break;
        }
    }

    if (found==1)
    {
        printf("elements found at position %d", i+1);
    }
    else{
           printf("elements not found");
    }

    return 0;

}

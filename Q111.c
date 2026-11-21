#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j;
    int found;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    printf("First negative integers: ");

    for(i = 0; i <= n-k; i++)
    {
        found = 0;

        for(j = i; j < i+k; j++)
        {
            if(arr[j] < 0)
            {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            printf("0 ");
        }
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j;
    int max;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    printf("Maximum elements in each window: ");

    for(i = 0; i <= n-k; i++)
    {
        max = arr[i];

        for(j = i; j < i+k; j++)
        {
            if(arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}

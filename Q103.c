#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int total = 0, leftSum = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total = total + arr[i];
    }

    for(i = 0; i < n; i++)
    {
        if(leftSum == total - leftSum - arr[i])
        {
            printf("Pivot index: %d", i);
            return 0;
        }

        leftSum = leftSum + arr[i];
    }

    printf("Pivot index: -1");

    return 0;
}

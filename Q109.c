#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j;
    int sum, maxSum;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    maxSum = -999999;

    for(i = 0; i <= n-k; i++)
    {
        sum = 0;

        for(j = i; j < i+k; j++)
        {
            sum = sum + arr[j];
        }

        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("Maximum sum of subarray of size %d: %d", k, maxSum);

    return 0;
}

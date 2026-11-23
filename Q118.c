#include <stdio.h>

int main()
{
    int n, i, sum = 0, expectedSum, missing;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d array elements (0 to %d):\n", n, n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    expectedSum = n * (n + 1) / 2;

    missing = expectedSum - sum;

    printf("Missing number = %d", missing);

    return 0;
}

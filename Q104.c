#include <stdio.h>

int main()
{
    int n, x;
    int leftSum, rightSum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(x = 1; x <= n; x++)
    {
        leftSum = x * (x + 1) / 2;
        rightSum = (n * (n + 1) / 2) - ((x - 1) * x / 2);

        if(leftSum == rightSum)
        {
            printf("Pivot integer: %d", x);
            return 0;
        }
    }

    printf("Pivot integer: -1");

    return 0;
}

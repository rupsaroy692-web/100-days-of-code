#include <stdio.h>

int main()
{
    int n, i, repeated = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[a[i] % n] >= n)
        {
            repeated = a[i] % n;
            break;
        }
        a[a[i] % n] += n;
    }

    if (repeated != -1)
        printf("Repeated element = %d", repeated);
    else
        printf("No repeated element found");

    return 0;
}

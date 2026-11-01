#include <stdio.h>

int main()
{
    int a[100], n, i, largest, second;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = second = -999999;

    for(i = 0; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    if(second == -999999)
        printf("Second largest element does not exist");
    else
        printf("Second largest element = %d", second);

    return 0;
}

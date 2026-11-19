#include <stdio.h>

int main()
{
    int nums[100], n, target;
    int i, first = -1, last = -1;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target element: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            if(first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    if(first != -1)
    {
        printf("First occurrence: %d\n", nums[first]);
        printf("Last occurrence: %d\n", nums[last]);
        printf("First index: %d\n", first);
        printf("Last index: %d\n", last);
    }
    else
    {
        printf("-1, -1");
    }

    return 0;
}

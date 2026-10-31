#include <stdio.h>

int main()
{
    int n, digit, i;
    int count[10] = {0};
    int max = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n < 0)
        n = -n;

    if(n == 0)
        count[0] = 1;

    while(n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
        }
    }

    printf("Digit(s) occurring the most:\n");

    for(i = 0; i < 10; i++)
    {
        if(count[i] == max)
        {
            printf("%d occurs %d times\n", i, max);
        }
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int a[10][10], m, n, i, j;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of matrix:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal of matrix:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == j)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    int i , j;

    for(i=1; i<=5; i++)
    {
        int n;
    

    if(i==1||i==5)
    n=1;
    else if(i==2||i==4)
    n=3;
    else
    n=5;

    for(j=1; j<=n; j++)
    {
        printf("*\n");
    }
 
 printf("\n");
    }
    return 0;

}

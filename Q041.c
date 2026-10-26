#include <stdio.h>

int main() {
    int n , first , last , temp , digits=0 , divisor=1 , result;

    printf("enter a number:");
    scanf("%d" , &n);

    temp=n;
    last=n%10;

    while(temp>=10)
    {
        temp=temp/10;
        digits++;
    }
    first=temp;

    for(int i=0; i<digits; i++)
    {
        divisor=divisor*10;
    }

    result=last*divisor+(n%10)-last+first;

    printf("number after swapping=%d" , result);


    return 0;

}

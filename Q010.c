#include <stdio.h>

int main() {
    int totalseconds , minutes , hours , seconds;

    printf("enter time in seconds:");
    scanf("%d" , &seconds);

    hours = totalseconds / 3600;
    minutes = (totalseconds % 3600) / 60;
    seconds = totalseconds % 60;

    printf("time = %02d:%02d:%02d" , hours , minutes , seconds);


    return 0;

}

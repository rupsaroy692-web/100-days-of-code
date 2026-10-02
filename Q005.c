#include <stdio.h>

int main() {
    float celcius , farheinheit ;

    printf("enter temparature in celcius:");
    scanf("%2f" , &celcius);

    farheinheit = (celcius * 9 / 5) + 32;

    printf("temparature in farheiheit = %.2f" , farheinheit);
    return 0;

}

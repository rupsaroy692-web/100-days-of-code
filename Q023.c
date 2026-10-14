#include <stdio.h>

int main() {
    int days;
    float fine;

    printf("enter the number of late days:");
    scanf("%d" , &days);

    if (days<0){
    printf("invalid input");
    }
    else if (days == 0) {
    printf("no fine");
    }
    else if (days <=5)
    {
        fine = days * 2;
        printf("library fine = %.2f" , fine);
    }
    else if (days <=10) {
        fine = (5*2) + (days - 5) * 4;
        printf("library fine =%.2f" , fine);
    }
    else if (days <=30)
 {
    fine = (5*2) + (5*4) + (days - 10) * 6;
    printf("library fine =%.2f" , fine);
 }
  else {
    printf("membership cancelled");
  }
    return 0;

}

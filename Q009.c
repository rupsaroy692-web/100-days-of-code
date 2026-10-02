#include <stdio.h>
#include<math.h>
        int main (){
        float p , r , t , ci , si , amount;

        printf("enter principal:");
        scanf("%f" , &p);

        printf("enter time:");
        scanf("%f" , &t);

        printf("enter rate:");
        scanf("%f" , &r);

        //simple interest
        si = (p * r * t) / 100;

        //compound interest
        amount = p * pow((1 + r / 100), t);
        ci = amount - p ;

        printf("\n simple interest is  = %2f" , &si);
        printf("\n compount interest is = %2f" , &ci);



    return 0;

}

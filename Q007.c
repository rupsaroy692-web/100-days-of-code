#include <stdio.h>

int main() {
    int a , b ;
     printf("enter two numbers:");
     scanf ("%d %d" , &a , &b);

     a = a + b;
     b = a - b ;
     a = a - b;
      
      printf("after swapping: \n");
      printf ("%d\n" , a);
      printf("%d\n" , b);
      
    return 0;

}

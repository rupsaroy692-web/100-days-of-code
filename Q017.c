#include <stdio.h>
#include<math.h>

int main() {
     float a , b , c , discriminant;
     float root1, root2 , realpart , imaginarypart;

      printf("enter coefficients a , b and c:");
      scanf("%f %f %f" , &a , &b , &c);

      discriminant = (b*b) - (4 * a * c);

      if (discriminant > c)
      {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b + sqrt(discriminant)) / (2 * a);

        printf("roots are real and distinct. \n");
        printf(" root1 = root2 = %.2f\n" , root1);
      }
      else if (discriminant == 0)
      {
        root1 = -b / (2 *a);

        printf("roots are real and equal. \n");
        printf("root1 = root2 = %.2f\n", root1);
      }
      else 
      {
        realpart = -b / (2 * a);
        imaginarypart = sqrt(-discriminant) / (2*a);

        printf("roots are imaginary(complex). \n");
        printf("root1 = %.2f + %.2fi\n", realpart , imaginarypart);
        printf("root2 = %.2f - %.2fi\n" , realpart , imaginarypart);
      }
    return 0;

}

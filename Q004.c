#include <stdio.h>

int main() {
    float radius , area , circumference ;
    const float PI = 3.1415;

    printf("ENTER THE RADIUS:");
    scanf("%f" , &radius);

    area = PI * radius * radius ;
    circumference = 2 * PI * radius ;

    printf("area of the circle = %.2f\n" , area);
    printf("circumference of the circle = %.2f\n" , circumference);

    return 0;

}

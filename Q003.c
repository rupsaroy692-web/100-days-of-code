#include <stdio.h>

int main() {
    float length , breadth , area , perimeter;

    printf("enter the length:");
    scanf("%f", &length);

    printf("enter the breadth:");
    scanf("%f", &breadth);

    perimeter = 2 * (length + breadth);
    area = length * breadth;

    printf("perimeter of the rectangle = %.2f units\n" , perimeter);\
    printf("area of the rectangle = %.2f square units\n" , area);

    return 0;

}

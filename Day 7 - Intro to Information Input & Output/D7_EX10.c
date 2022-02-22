#include <stdio.h>

float x, y, z;

float product(float a, float b);

int main(void) {
    puts("Enter two floating-point values: ");
    scanf("%f %f", &x, &y);

    z = product(x, y);
    printf("The product is %f", z);

    return 0;
}

float product(float a, float b) {
    float c;  

    c = a*b;

    return c;
}
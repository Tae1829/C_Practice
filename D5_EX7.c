#include <stdio.h>

float x, y, z;

float product(float a, float b);

int main(void) {
    puts("Enter two numbers: ");
    scanf("%f%f", &x, &y);

    z = product(x, y);

    printf("\nThe value of their product is %f", z);

    return 0; 
}

float product(float a, float b) {
    float c;
    
    c = a*b;

    return c;

}
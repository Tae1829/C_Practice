#include <stdio.h>

float a, b, c, d, e, f;

float average(float v, float w, float x, float y, float z);

int main(void) {
    puts("Enter five float numbers: ");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

    f = average(a, b, c, d, e);

    printf("\nThe average value is %f", f);
}

float average(float v, float w, float x, float y, float z) {
    float avg;
    avg = (v+w+x+y+z)/5;
    return avg;
}
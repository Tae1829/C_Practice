#include <stdio.h>

int x ,y;


int cube3(int exponent);

int main(void) {
    puts("Enter exponent: ");
    scanf("%d", &x);

    y = cube3(x);

    printf("\nThe average value is %d", y);

}

int cube3(int exponent) {
    int result;
    if (exponent == 0) {
        return 1;
    }
    else {
        result = 3*cube3(exponent-1);
        return result;
    }
}
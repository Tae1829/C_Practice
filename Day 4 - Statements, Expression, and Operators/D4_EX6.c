#include <stdio.h>

int x, y, z;

int larger_of(int a, int b);

int main(void) {
    puts("Enter two different integer values: ");
    scanf("%d%d", &x, &y);

    z = larger_of(x,y);

    printf("\nThe larger values is %d.", z);

    return 0;
}

int larger_of(int a, int b) {
    int c;
    c = (x>y)? x:y;
    return c;
}
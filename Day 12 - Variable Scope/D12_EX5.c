#include <stdio.h>

int var = 99;

void print_func(void);

void main(void) {
    int var = 77;
    printf("Printing in function with local and global: ");
    printf("\nThe Value of var is %d", var);
    print_func();

}

void print_func(void) {
    printf("\nPrinting in function only global: ");
    printf("\nThe Value of var is %d\n", var);
}
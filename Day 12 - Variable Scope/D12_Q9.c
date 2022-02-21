#include <stdio.h>

void main(void) {
    {
        int count = 999;
        printf("\nWithin the block, count = %d", count);
    }

    //printf("\nOutside the block again, count = %d\n", count);
    //An ablove line is error since the variable out of scope.
}
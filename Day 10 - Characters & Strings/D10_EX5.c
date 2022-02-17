#include <stdio.h>
#include <stdlib.h>

char array1[11], array2[11];

void char_array_copy(char array_A[], char array_B[]);

void main(void) {
    puts("Enter maximum 10-character strings, then press Enter: ");
    gets(array1);

    char_array_copy(array1, array2);
    printf("%s", array2);

}

void char_array_copy(char array_A[], char array_B[]) {
    char *ptr = array_A;
    int ctr;
    for (ctr = 0; (*ptr) != '\0'; ctr++) {
        array_B[ctr] = *ptr++;
    }
}
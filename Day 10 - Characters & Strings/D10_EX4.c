#include <stdio.h>
#include <stdlib.h>

void main(void) {
    char *str;
    str = (char *) malloc(81);

    puts("Enter maximum 80-character strings, then press Enter: ");
    gets(str);
    printf("You entered: %s\n", str);


}
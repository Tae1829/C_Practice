#include <stdio.h>
#include <stdlib.h>

#define MAX 51

char *str1, *str2;
int len1, len2;

int strlen_count(char *str);

void main(void) {
    str1 = (char *) malloc(MAX);
    str2 = (char *) malloc(MAX);

    puts("Enter maximum 50-character strings for str1, then press Enter: ");
    gets(str1);

    puts("Enter maximum 50-character strings for str2, then press Enter: ");
    gets(str2);

    len1 = strlen_count(str1);
    len2 = strlen_count(str2);

    if (len1 > len2) {
        puts("str1 is longer than str2");
    }
    else if (len1 < len2) {
        puts("str2 is longer than str1");
    }
    else {
        puts("They are same length !");
    }

}

int strlen_count(char *str) {
    char *ptr = str;
    int ctr, length = 0;
    
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    return length;
}
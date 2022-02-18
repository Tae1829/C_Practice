#include <stdio.h>
#include <stdlib.h>

#define MAX 51

char *str1, *str2, *str3;
int len1, len2;

int strlen_count(char *str);
char* str_concat(char *strA, char *strB, int sum_length);

void main() {
    str1 = (char *) malloc(MAX);
    str2 = (char *) malloc(MAX);

    puts("Enter maximum 50-character strings for str1, then press Enter: ");
    gets(str1);

    puts("Enter maximum 50-character strings for str2, then press Enter: ");
    gets(str2);

    len1 = strlen_count(str1);
    len2 = strlen_count(str2);

    str3 = str_concat(str1, str2, len1 + len2);

    puts(str3);
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

char* str_concat(char *strA, char *strB, int sum_length) {
    int ctr;
    char *str_buf1, *str_buf2, *strC, *strD;
    strC = (char *) malloc(sum_length+1);
    strD = strC;

    for (str_buf1 = strA; *str_buf1 != '\0'; str_buf1++) {
        *strC = *str_buf1;
        strC++;
    }

    *strC = ' ';
    strC++;

    for (str_buf2 = strB; *str_buf2 != '\0'; str_buf2++) {
        *strC = *str_buf2;
        strC++;
    }

    *strC = '\0';

    return strD;
}
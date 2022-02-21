#include <stdio.h>

void main() {
    char myString[10000];
    scanf("%s", myString);
//    printf("Input String: %s\n", myString);

/*
    int stringSize = sizeof(myString);
    printf("%d\n", stringSize);
*/

    _Bool isUpper = 0;
    _Bool isLower = 0;

/*
    printf("%c %d\n", myString[0], myString[0]);
    printf("%c %d\n", myString[1], myString[1]);
    printf("%c %d\n", myString[2], myString[2]);
    printf("%c %d\n", myString[3], myString[3]);
    printf("%c %d\n", myString[4], myString[4]);
    printf("%c %d\n", myString[5], myString[5]);
    printf("%c %d\n", myString[6], myString[6]);
    printf("%c %d\n", myString[7], myString[7]);
    printf("%c %d\n", myString[8], myString[8]);
*/

    for (int i=0 ; i<sizeof(myString) ; i++) {
        if ((myString[i] == 0 )) {
            break;
        }
        if ((myString[i] >= 65) && (myString[i] <= 90)) {
            isUpper = 1;
        }
        if ((myString[i] >= 97) && (myString[i] <= 122)) {
            isLower = 1;
        }
    }

    if ((isLower && isUpper) == 1) {
        printf("Mix");
    }
    else if (isUpper == 1) {
        printf("All Capital Letter");
    }
    else {
        printf("All Small Letter");
    }

}
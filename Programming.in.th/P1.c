#include <stdio.h>

int main(void) {
    int keep, midterm, final, sum;

    scanf("%d", &keep);
    scanf("%d", &midterm);
    scanf("%d", &final);

    sum = keep + midterm + final;

    if (sum >= 80) {
        printf("A");
    }
    else if (sum >= 75) {
        printf("B+");
    }
    else if (sum >= 70) {
        printf("B");
    }
    else if (sum >= 65) {
        printf("C+");
    }
    else if (sum >= 60) {
        printf("C");
    }
    else if (sum >= 55) {
        printf("D+");
    }
    else if (sum >= 50) {
        printf("D");
    }
    else {
        printf("F");
    }

}


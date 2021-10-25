#include <stdio.h>

void main() {
    int n;
    signed long min = 2000000000;
    signed long max = -2000000000;

    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        int number;
        scanf("%d", &number);
        if (number < min) {
            min = number;
        }
        else if (number > max) {
            max = number;
        }
    }

    printf("%d\n%d", min, max);
}
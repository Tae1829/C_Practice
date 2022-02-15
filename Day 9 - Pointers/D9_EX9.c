#include <stdio.h>

#define MAX 10

int array_a[MAX], array_b[MAX], array_c[MAX];
int i;

void accept_array(int array[], int length);
void sum_array(int array1[], int array2[], int array3[], int length);
void display_array(int array[], int length);

void main(void) {
    puts("Enter the fisrt array: ");
    accept_array(array_a, MAX);

    puts("Enter the second array: ");
    accept_array(array_b, MAX);

    sum_array(array_a, array_b, array_c, MAX);

    puts("Sum of inputs array is ");
    display_array(array_c, MAX);

}

void accept_array(int array[], int length) {
    for (i = 0; i < length; i++) {
        scanf("%d", &array[i]);
    }
}

void sum_array(int array1[], int array2[], int array3[], int length) {
    for (i = 0; i < length; i++) {
        array3[i] = array1[i] + array2[i];
    }
}

void display_array(int array[], int length) {
    for (i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
}

#include <stdio.h>

#define old 0
#define new 1

int array[10], plus10_array[10];
int i;

void initializes_array(void);
void array_display(int choice);
void plus10_to_array(void);

void main(void) {
    initializes_array();
    array_display(old);

    plus10_to_array();
    array_display(new);

}

void initializes_array(void) {
    for (i = 0; i < 10; i++) {
        array[i] = i;
    }
}

void array_display(int choice) {
    for (int i = 0; i < 10; i++) {
        if (choice == old) {
            printf("%d\t", array[i]);
        }
        else {
            printf("%d\t", plus10_array[i]);
        }
    }

    printf("\n"); 
}   

void plus10_to_array(void) {
    for (int i = 0; i < 10; i++) {
        plus10_array[i] = array[i]+10;
    }   
}
#include <stdio.h>
#include <stdlib.h>

int array[5][4];

void storing_to_array(void);
void array_display(void);

void main(void) {
    storing_to_array();
    array_display();

}

void storing_to_array(void) {
    for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 4; j++) {
                array[i][j] = rand();
            }
        }
}

void array_display(void) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", array[i][j]);
        }

        printf("\n");
    }
}   
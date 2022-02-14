#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_array[1000];
int i;
int sum = 0;

void storing_to_array_and_sum(void);
void array_display_with_wait(void);

void main(void) {
    srand ( time(NULL) );
    storing_to_array_and_sum();

    printf("The average value is %d", sum/1000);

    array_display_with_wait();   
}

void storing_to_array_and_sum(void) {
    for (i = 0; i < 1000; i++) {
        random_array[i] = rand();
        sum += random_array[i];
    }
}

void array_display_with_wait(void) {
    for (i = 0; i < 1000; i++) {
        printf("\nrandom_array[%d] = [%d]", i, random_array[i]);
        
        if ( (i>0) && (i%10 == 0) ) {
            puts("\nPress Enter to continue, CTRL-C to quit.");
            getchar();
        }
    }
}



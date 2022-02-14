#include <stdio.h>

#define MAX 100

int array[MAX], input;
int count = 0;
int max = -32000;
int min = 32000;

void storing_to_array(void);
void array_display(void);
void max_min_detect(void);

int main(void) {
    puts("Enter inputs integers: ");

    storing_to_array();
    array_display();
    max_min_detect();

    printf("\nminimum number is %d\nmaximum number is %d", min, max);
    
    return 0;
    
}

void storing_to_array(void) {
    do {
        scanf("%d", &input);
        array[count] = input;
        count++;       
    } while (input != 0);

}

void array_display(void) {
    for (int i = 0; i < 100 && array[i] != 0; ) {
        printf("%d ", array[i++]);
    }
}

void max_min_detect(void) {
    for (int i = 0; i < 100 && array[i] != 0; ) {
        if (array[i] > max) {
            max = array[i++];
        }
        else if (array[i] < min) {
            min = array[i++];
        }
    }
} 

#include <stdio.h>
#include <stdlib.h>

#define DELAY 150000

int menu(void);
void delay(void);

void main(void) {

    int command = 0;

    while (command != 5) {     

        command = menu();

        switch (command) {
            case 1:
                puts("\nExecuting task A.");
                delay();
                break;
            case 2:
                puts("\nExecuting task B.");
                delay();
                break;
            case 3:
                puts("\nExecuting task C.");
                delay();
                break;
            case 4:
                puts("\nExecuting task D.");
                delay();
                break;
            case 5:
                puts("Exiting program now...\n");
                break;      
            default:
                puts("\nInvalid choice, try again.");
        }
    }
}

int menu(void) {

    int reply;

    puts("\nEnter 1 for task A.");
    puts("Enter 2 for task B.");
    puts("Enter 3 for task C.");
    puts("Enter 4 for task D.");
    puts("Enter 5 to exit program.");

    scanf("%d", &reply);

    return reply;
}

void delay(void) {

    long x;
    
    for (x = 0; x < DELAY; x++) {
        ;
    }
}
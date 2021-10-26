#include <stdio.h>

//global variable
int num[3];
char seq[3];

//function prototype
void displayResult();

//main program
void main() {
    
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    scanf("%s", seq);  

    for (int k=0 ; k<2 ; k++) {
        for (int i=0 ; i<2 ; i++) {
            if (num[i] > num[i+1]) {
                int buffer;
                buffer = num[i];
                num[i] = num[i+1];
                num[i+1] = buffer;
            }    
        }
    }

    displayResult();

}

void displayResult() {
    for (int j=0 ; j<=2 ; j++) {
        if (seq[j] == 'A') {
            printf("%d", num[0]);
        }
        else if (seq[j] == 'B') {
            printf("%d", num[1]);
        }
        else {
            printf("%d", num[2]);
        }

        if (j<2) {
            printf(" ");
        }
    }     
}
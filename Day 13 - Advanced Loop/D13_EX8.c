#include <stdio.h>
#include <stdlib.h>

char operator, valid = 1;
int num1,num2,result;

void input_analysis(char *str);

void main() {

    while (1) {

        puts("Please enter calculation input separated by spaces, then press Enter: ");
        scanf("%d %c %d",&num1, &operator, &num2);

        switch (operator) {
            case '+': 
                result = num1 + num2;
                valid = 1;
                break;
            case '-':
                result = num1 - num2;
                valid = 1;
                break;
            case '*':
                result = num1*num2;
                valid = 1;
                break;
            case '/':
                result = num1/num2;
                valid = 1;
                break;
            default :
                puts("Invalid operator, please try again...");
                valid = 0;
        }

        if (valid == 1) {

            printf("The result is %d\n", result);

        }

    }

}


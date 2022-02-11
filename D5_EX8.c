#include <stdio.h>

int x, y = 0, z;

int divide(int a, int b);
void get_inputs(void);

int main(void) {

    get_inputs();

    while (y == 0) {
        printf("Divider cannot be ZERO!!! Please check your input again.\n");
        get_inputs();
 
    }

    z = divide(x, y);
    printf("\nThe value of a divide by b is %d", z);
    

}

inline int divide(int a, int b) {
    int c;
    
    c = a/b;

    return c;
}

inline void get_inputs(void) {
    puts("Enter integer a and b respectively: ");
    scanf("%d%d", &x, &y);
}
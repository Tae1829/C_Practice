#include <stdio.h>
#include <math.h>

//structure define
typedef struct {
    float x, y;
} sideLength;

//function prototype
float pythagorus(sideLength s1);

//main program
void main() {
    sideLength s1;
    scanf("%f %f", &s1.x, &s1.y);
    
    float ans;
    ans = pythagorus(s1);
    printf("%.6f", ans);

}

//function define
float pythagorus(sideLength s) {
    float result;
    result = sqrt(pow(s.x, 2) + pow(s.y, 2));
    return result;
}
#include <stdio.h>

void main() {
    int m,n;
    scanf("%d %d", &m, &n);

    int matrix_1[m][n], matrix_2[m][n], sum[m][n];

    //input matrix
    for (int i=0 ; i<2*m ; i++) {
        for (int j=0 ; j<n ; j++) {
            if (i<m) {
                scanf("%d", &matrix_1[i][j]);
            }
            else {
                scanf("%d", &matrix_2[i-m][j]);    
            }
        }        
    }

    //sum matrix
    for (int i=0 ; i<m ; i++) {
        for (int j=0 ; j<n ; j++) {
           sum [i][j] = matrix_1[i][j] + matrix_2[i][j];            
        }
    }

    //display sum result
    for (int i=0 ; i<m ; i++) {
        for (int j=0 ; j<n ; j++) {
           printf("%d ", sum[i][j]);           
        }
        printf("\n");
    }          
    
}
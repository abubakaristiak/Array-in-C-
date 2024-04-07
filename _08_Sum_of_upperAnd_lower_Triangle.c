#include <stdio.h>

int main() {
    int A[10][10];
    int upperSum=0, lowerSum=0;
    printf("\nEnter the matrix elements: \n\n");
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nEntered matrix: \n");
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    // Sum of Upper and Lower triangle elements
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            if(i<j){
                upperSum = upperSum + A[i][j];
            }
            if(i>j){
                lowerSum = lowerSum + A[i][j];
            }
        }
    }

    printf("\nSum of upper triangle = %d\n", upperSum);
    printf("\nSum of lower triangle = %d\n", lowerSum);
    return 0;
}
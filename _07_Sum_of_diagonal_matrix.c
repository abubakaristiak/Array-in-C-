#include <stdio.h>

int main() {
    int A[5][5];
    int sum=0; 
    
    // Gettng the element for the matrix
    printf("Enter the element for the matrix: \n\n");
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    //Printing the matrix
    printf("Entered Matrix\n");
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    // Printing diagonal elements
    printf("\nDiagonal Element: ");
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            if(i==j){
                printf("%d ",A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }
    printf("\nsum of diagonal elements = %d\n",sum);
    return 0;
}
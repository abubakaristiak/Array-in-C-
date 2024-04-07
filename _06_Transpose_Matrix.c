#include <stdio.h>

int main() {
    int A[10][10], transpose[10][10], row, col;
    printf("Enter number of rows and columns for the matrix: \n");
    scanf("%d %d", &row, &col);

    // Scaning A matrix:
    printf("Enter %d elements: \n",(row*col));
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            printf("A[%d][%d] = ", i,j);
            scanf("%d",&A[i][j]);
        } 
    }
    // Transpose Matrix:
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            transpose[j][i] = A[i][j];
        }
    }
    // printing A matrix:
    printf("Entered Matrix or A matrix: \n");
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    // Transpose matrix:
    printf("\nTranspose Matrix:\n");
    for(int i=1; i<=col; i++){
        for(int j=1; j<=row; j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
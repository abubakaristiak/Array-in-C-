#include <stdio.h>

int main() {
    int first[10][10], second[10][10], result[10][10];
    int r1, c1, r2, c2;
    int sum=0;

    
    printf("Enter rows and column for first matrix: \n");
    scanf("%d %d",&r1, &c1);

    printf("Enter rows and column for second matrix: \n");
    scanf("%d %d",&r2, &c2);

    while(c1!=r2)
    {
        printf("Error !! column of first matrix not equal to row of second matrix\n");

        printf("Enter rows and column for first matrix: \n");
        scanf("%d %d",&r1, &c1);

        printf("Enter rows and column for second matrix: \n");
        scanf("%d %d",&r2, &c2);
    }

    // Taking input for first matrix 
    printf("\nEnter element for first matrix\n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("first[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    // Taking input for second matrix
    printf("\nEnter element for second matrix\n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("second[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }
    }
    // Multiplying matrix
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            for(int k=0; k<c1; k++){
                sum = sum + first[i][k] * second[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    printf("\n");
    // Printing first matrix
    printf("First matrix\n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("%d ",first[i][j]);
            
        }
        printf("\n");
    }
    printf("\n");
    printf("Second matrix\n");
    // Printing second matrix
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("%d ",second[i][j]);
            
        }
        printf("\n");
    }
    // Printing Result matrix
    printf("\nResult matrix\n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            printf("%d ",result[i][j]);
           
            
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    // int ar[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int A[30][30];
    int B[30][30];
    int C[30][30];
    int n,m;

    printf("How many row numbers: \n");
    scanf("%d",&n);

    printf("How many colum numbers: \n");
    scanf("%d", &m);

    //Scaning A matrix
    printf("Enter the elements for A matrix.\n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //Scaning B matrix
    printf("\nEnter the elements for B matrix.\n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    // Printing A matrix
    printf("A = ");
    for(int i=1; i<=n; i++){
        printf("\t");
        for(int j=1; j<=m; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    // Printing B matrix
    printf("\nB = ");
    for(int i=1; i<=n; i++){
        printf("\t");
        for(int j=1; j<=m; j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    //Additon the matrix
    
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=m; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
        
    }

    // Printing C matrix
    printf("\nA + B = ");
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=m; j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
        printf("\t");
    }

    
  
    return 0;
}
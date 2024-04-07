#include <stdio.h>

int main() {
    // int ar[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int A[30][30];
    
    int n,m;

    printf("How many row numbers: \n");
    scanf("%d",&n);

    printf("How many colum numbers: \n");
    scanf("%d", &m);

    
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            printf("ar[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    
    
    for(int i=1; i<=n; i++){
       
        for(int j=1; j<=m; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}

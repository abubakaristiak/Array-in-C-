#include <stdio.h>

int main() {
    int LA[100], k, j, n;

    printf("Enter number of elements in array: \n");
    scanf("%d",&n);

    printf("Enter the %d elements: \n", n);

    for(int j=1; j<=n; j++){
        scanf("%d", &LA[j]);
    }

    printf("Enter the location where you wish do delete elements\n");
    scanf("%d", &k);

    if(k>n){
        printf("Deletion not possible.\n");
    }
    else{
        int item = LA[k];
        for(int j=k; j<=n-1; j++){
            LA[j]=LA[j+1];
        }
        printf("Result array is: \n");
        for(int j=1; j<=n-1; j++){
            printf("%d \n", LA[j]);
        }
    }

    return 0;
}
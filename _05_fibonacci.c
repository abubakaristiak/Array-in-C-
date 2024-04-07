#include <stdio.h>

int main() {
    int ar[30],n;
    
    printf("How many fibonacci numbers: \n");
    scanf("%d",&n);

    ar[0] = 0;
    ar[1] = 1;

    for(int i=2; i<n; i++){
        ar[i] = ar[i-1] + ar[i-2];
    }
    printf("\n");

    for(int i=0; i<n; i++){
        printf("%d\n", ar[i]);
    }

    return 0;
}
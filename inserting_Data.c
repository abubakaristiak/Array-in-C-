#include <stdio.h>

int main() {
    int LA[50],K,J, N, ITEM;

    printf("Enter numbers of elements in the array: \n");
    scanf("%d",&N);

    printf("Enter %d elements: \n", N);

    for(J=1; J<=N; J++)
    {
        scanf("%d", &LA[J]);
    }

    printf("Please enter the location where you want to insert an new elements: \n");
    scanf("%d", &K);
    printf("Please enter the value: \n");
    scanf("%d", &ITEM);

    for(J=N; J>=K; J--)
    {
        LA[J+1] = LA[J];
        LA[K] = ITEM;

    }

    printf("Result Array is: \n");

    for(J=1; J<=N+1; J++){
        printf("%d\n", LA[J]);
    }


    return 0;
}
#include <stdio.h>

int main() {
    int LA[50], K, J, N, ITEM;

    printf("Enter the number of elements in the array: \n");
    scanf("%d", &N);

    printf("Enter %d elements: \n", N);

    for (J = 1; J <= N; J++) {
        scanf("%d", &LA[J]);
    }

    printf("Please enter the location where you want to insert a new element: \n");
    scanf("%d", &K);
    
    if (K < 1 || K > N + 1) {
        printf("Invalid insertion position.\n");
        return 1;  // Exit the program with an error code.
    }

    printf("Please enter the value: \n");
    scanf("%d", &ITEM);

    // Shift elements to make space for the new element.
    for (J = N; J >= K; J--) {
        LA[J + 1] = LA[J];
    }

    // Insert the new element at the specified position.
    LA[K] = ITEM;

    N++;  // Increase the size of the array.

    printf("Result Array is: \n");

    for (J = 1; J <= N; J++) {
        printf("%d\n", LA[J]);
    }

    return 0;
}

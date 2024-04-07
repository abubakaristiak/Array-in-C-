#include <stdio.h>

int main() {
    int array1[30], array2[30];
    int n;

    printf("How many numbers: \n");
    scanf("%d", &n);

    printf("Enter %d numbers: \n",n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Array1: \n");
    for(int i=1; i<=n; i++)
    {
        printf("%d\n", array1[i]);
    }

    // copy elements
    for(int i=1; i<=n; i++)
    {
        array2[i] = array1[i];
    }

    printf("Array2\n");
    for(int i=1; i<=n; i++)
    {
        printf("%d\n", array2[i]);
    }
    return 0;
}
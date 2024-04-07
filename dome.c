#include <stdio.h>

int main() {
    int n, sum = 0;
    int ar[5];

    printf("Enter how many numbers you want to input (up to 5): \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &ar[i]);
        sum += ar[i];
    }

    printf("The sum is: %d\n", sum);

    // Calculate and print the average using the loop
    float average = (float)sum / n;
    printf("The average is: %.2f\n", average);

    return 0;
}

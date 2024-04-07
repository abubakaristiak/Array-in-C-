#include <stdio.h>

int main() {
    int n, sum=0;
    int a[100];
    printf("Enter the which you want numbers: \n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n; i++)
    {
        sum = sum +a[i];
    }
    printf("The sum is: %d\n",sum);
    printf("The average is: %.2f\n",(float)sum/n);

    return 0;
}
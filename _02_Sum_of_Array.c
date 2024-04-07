#include <stdio.h>

int main() {
    int num[]={10,20,30,40,50};
    int sum=num[0]+num[1]+num[3]+num[4];
    printf("The summation is: %d\n",sum);
    printf("The average is: %.2f\n", (float)sum/5);



    return 0;
}
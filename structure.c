#include <stdio.h>

int main() {
    int x=5;
    // printf("Value of x: %d\n",x);
    // printf("Address of x: %d\n",&x);
    int *ptr;

    ptr =&x;
    printf("%d\n",x); 
    printf("%d\n",&x);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",&ptr);
    return 0;
}
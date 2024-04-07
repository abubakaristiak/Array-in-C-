#include <stdio.h>

int main() {
    // int marks[100];
    // marks[0]=10;
    // marks[1]=20;
    // printf("%d %d\n", marks[0], marks[1]);
    int marks[5];
    for (int i = 1; i <=5; i++)
    {
        scanf("%d\n",marks[i]);
    }
    
    for(int i=1; i<=5; i++){
        printf("%d\n",marks[i]);
    }
    
    return 0;
}
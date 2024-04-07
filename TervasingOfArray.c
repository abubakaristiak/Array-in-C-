#include <stdio.h>

int main() {
    int addhar[5];
    // int *ptr = &addhar[0];
    for(int i=0; i<5; i++){
        printf("%d index: ",i);
        scanf("%d",&addhar[i]);

    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d index = %d\n",i,addhar[i]);
    }
    
    return 0;
}
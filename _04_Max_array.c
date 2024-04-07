#include <stdio.h>

int main() {
    int num[100],n;
    printf("How many numbers: \n");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&num[i]);
    }
    int max=num[0];
    for(int i=1; i<n; i++){
        if(max<num[i]){
            max=num[i];
        }
    }
    printf("Maximum Number is: %d\n",max);
    return 0;
}
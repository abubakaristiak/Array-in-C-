#include <stdio.h>

int main() {
    int ar[] = {10,20,30,40,50,60};
    int value, pos = -1; 

    printf("Enter the value which you want to search: \n");
    scanf("%d", &value);

    for(int i=1; i<=5; i++)
    {
        if(value = ar[i]){
            pos = i; 
            break;
        }
    }
    if(pos == -1){
        printf("Value is not found\n");
    }
    else{
        printf("The value is found at %d position \n", pos);
    }
    
    return 0;
}
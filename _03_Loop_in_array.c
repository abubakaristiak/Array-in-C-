// method 1

// #include <stdio.h>

// int main() {
//     int ar[5], sum=0;
//     ar[0] = 10;
//     ar[1] = 20;
//     ar[2] = 30;
//     ar[3] = 40;
//     ar[4] = 50;

//     for(int i=0; i<5; i++){
//         sum = sum+ar[i];
//     }
//     printf("the sum is: %d\n",sum);
//     printf("The average is %.2f\n", (float)sum/5);

//     return 0;
// }


// method 2
// #include <stdio.h>
// int main() {
//     int ar[5],sum=0;
//     printf("Enter 5 Numbers: \n");
//     scanf("%d %d %d %d %d",&ar[0],&ar[1],&ar[2],&ar[3],&ar[4]);

//     for(int i=0; i<5; i++){
//          sum = sum+ar[i];
//     }
//     printf("the sum is: %d\n",sum);
//     return 0;
// }

// method 3
#include <stdio.h>
int main() {
    int ar[5],sum=0,n; 
    printf("How many numbers: \n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        
        scanf("%d",&ar[i]);
    }
    for(int i=1; i<=n; i++){
         sum = sum+ar[i];
    }
    printf("the sum is: %d\n",sum);
    printf("The average is %.2f\n", (float)sum/n);
    return 0;
}


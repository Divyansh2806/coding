// // #include<stdio.h>
// // int main(){
// //     int n;
// //      printf("Enter number : ");
// //      scanf("%d",&n);
// //      int product = 0;
// //      int i;
// //      for(i = 0; i<=n;i++){
// //          product = (i-1) + i;  
// //          printf("The Factorial of %d is : %d\n",i,product);
// //         }
// //      return 0;
// // }


// #include<stdio.h>
// int main(){
//     int n ;
//     printf("Enter number : ");
//     scanf("%d",&n);
//     int factorial = 1;
//     int i;
//     for ( i = 1; i <= n; i++)
//     {
//         factorial = factorial * i;
//         printf("the factorial of %d is : %d\n ",i, factorial);
//     }
//     return 0;
// }



#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int factorial = 1;
    int i;
    for(i = 1; i <=n; i++){
        factorial = factorial * i;
        printf("The factorial of %d is : %d\n",i,factorial);
    }
    return 0;
}
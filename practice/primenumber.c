// // // #include <stdio.h>

// // // int main() {
// // //     int n, i, isPrime = 1;  // isPrime = 1 means true

// // //     printf("Enter a number: ");
// // //     scanf("%d", &n);

// // //     if (n <= 1) {
// // //         printf("%d is not a prime number.\n", n);
// // //         return 0;
// // //     }

// // //     for (i = 2; i <= n / 2; i++) {
// // //         if (n % i == 0) {
// // //             isPrime = 0;  // Not prime
// // //             break;
// // //         }
// // //     }

// // //     if (isPrime)
// // //         printf("%d is a prime number.\n", n);
// // //     else
// // //         printf("%d is not a prime number.\n", n);

// // //     return 0;
// // // }
// // #include<stdio.h>
// // int main(){
// //     int n;
// //     printf("Enter number : ");
// //     scanf("%d",&n);
// //     // printf("%d ",n);
// //     int a = 1;
// //     for(int i = 2; i<n; i++){
// //         if(n%i==0){
// //             a = 0; 
// //             break;    
// //         }
// //     }
// //     if(n<=1){printf("not a prime number");}
// //     else if(a==1){printf("%d is a Prime Number",n);}
// //     else{printf("%d is a Composite Number ",n);}

// //     return 0;
// // }


// // #include<stdio.h>
// // int main(){
// //     for (int  i = 1; i <=100; i++)
// //     {
// //         if(i%2!=0){
// //         continue;
// //         }
// //     printf("%d ",i);
// //     }
// //     return 0;
// // }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n : ");
//     scanf("%d",&n);
//     int a = 1;
//     for (int i = 2; i < n; i++)
//     {
//         if(n%2==0){
//             a = 0;
//             break;
//         }
//     }
//     if(n<=1){
//         printf("The Given number is not a prime Number");
//     }
//     else if(a==1){
//         printf("The given number is prime");
//     }
//     else{
//         printf("The number is composite");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int a = 0;
    if(n<=1){
        printf("%d is not prime",n);
    }
    for (int i = 1; i < n; i++)
    {
        if(n%i==0){
            a++;
        }
    }
    if(a>2){
        printf("%d is not prime",n);
    }
    else{
        printf("%d is prime number",n);
    }
    return 0;
}
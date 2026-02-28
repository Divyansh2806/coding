// #include<stdio.h>
// int factorial(int n){
//     if(n==1 || n==0) return 1;
//     int fact = n*factorial(n-1);
//     return fact;
// }
// int main(){
//     int n;
//     printf("Enter n : ");
//     scanf("%d",&n);
//     int fact = factorial(n);
//     printf("%d",fact);
//     return 0;
// }


#include<stdio.h>
int factorial(int n){
    if(n==1) return 1;
    int fact = n*factorial(n-1);
    return fact;
    
}
int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d",fact);
    return 0;
}
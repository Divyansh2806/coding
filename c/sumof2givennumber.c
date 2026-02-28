#include<stdio.h>
int main(){
    float x , y;
    printf("Enter First Number : ");
    scanf("%f",&x);
    printf("Enter Second Number : ");
    scanf("%f",&y);
    printf("Sum of the Numbers is : %f",x +y);
    return 0;
}

// // predict the output 
// #include<stdio.h> 
// int main(){
//     int p , q;
//     printf("Enter values of p and q");
//     scanf("%d %d",&p, &q);
//     printf("p = %d q = %d",p,q);
//     return 0;
// } 

// // Example: take two integers input ,a and b:a>b,and find the remainder when a is divided by b and print the remainder.
// #include<stdio.h>
// int main(){
//     int a , b , q , r;
//     printf("enter Dividend: ");
//     scanf("%d",&a);
//     printf("enter Divisor: ");
//     scanf("%d",&b);
//     q = a/b;
//     r = a-b*q;
//     printf("q = %d",q);
//     printf("\nThe Remainder when %d is divided by %d is: %d",a,b,r);
//     return 0;
// }
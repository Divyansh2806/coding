#include<stdio.h>
int main(){
    int a , b;
    printf("Enter dividiend : ");
    scanf("%d",&a);
    printf("Enter Divisor : ");
    scanf("%d",&b);
// divisor * quotient + remainder = dividend
    int q = a/b;
    printf("The  Value of quotient is : %d",q);
    int r = a -(b*q); 
    printf("\nThe Remainder when %d is divided by %d is : %d",a , b ,r);


    // int r = a % b;//modulo operator
    // printf("The Remainder when %d is divided by %d is : %d",a , b ,r);
    return 0;
}

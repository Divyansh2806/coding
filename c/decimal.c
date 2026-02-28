#include<stdio.h>
int main(){
    float x;
    printf("Enter the decimal number : ");
    scanf("%f",&x);
    int y;
    y = x;
    printf("The value of y is :%d",y);
    
    float z;
    z = x - y;
    printf("\nThe Fractional part of %f is : %f",x , z);
    return 0;
}
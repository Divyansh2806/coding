#include<stdio.h>
int main(){
    int n, a, b, sum;
    printf("Enter the nth term : ");
    scanf("%d",&n);
    // printf("Enter the first term : ");
    // scanf("%d",&a);
    // printf("Enter the second term : ");
    // scanf("%d",&b);
    // printf("fibonacci numbers : ");
    a = 1;
    b = 1;
    sum = 1;
    for(int i = 1; i<=n-2; i++){
        sum = a + b;
        a = b;
        b = sum;
        printf("The %dth fibonacii number is : %d\n",i,sum);
    }
return 0;
}
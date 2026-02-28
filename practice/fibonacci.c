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
    a = 3;
    b = 8;
    // sum = 1;
    if (n>=1)
    {
        printf("The 1th fibonacii number is : %d\n",a);
    }
    if (n>=2)
    {
        printf("The 2th fibonacii number is : %d\n",b);
    }
    
    for(int i = 3; i<=n; i++){
        sum = a + b;
        printf("The %dth fibonacii number is : %d\n",i,sum);
        a = b;
        b = sum;
    }
return 0;
} 
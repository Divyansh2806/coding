#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    float a;
         printf("\nEnter first number(a) : ");
             scanf("%f",&a);
     for (int i = 1; i <=n; i++)
     {
         printf("%3f\n ",a);
         a = a/2;
     }
     return 0;
}     

        
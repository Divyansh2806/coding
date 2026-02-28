#include<stdio.h>
int main(){
    int num;
    printf("Enter Number for table that you want print");
    printf("\nEnter Number : ");
    scanf("%d",&num);
    int a = 1;
    for(int i = 1;i<=num;i++){
    printf("%d\n",a);
    a =  a+2;
    // for(int i = 1;i<=((2*num)-1);i=i+2){
    // printf("%d\n",i);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int num;
    printf("Enter num : ");
    scanf("%d",&num);
    printf("number is : %d \n",num);
    for (int i = 0; i <=num; i++)
    {
        printf("%d ",i);
    }
    return 0;
}
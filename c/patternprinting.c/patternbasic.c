#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter number of columns : ");
    scanf("%d",&m);

    for (int i = 0; i <n; i++)
    {
        for (int i = 0; i <m; i++)
        { 
            printf("* ");
        }
        printf("\n");
    }
}
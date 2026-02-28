#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int sum = 0;\
    //1 - 2 + 3 - 4 + 5 - 6
    for(int i = 1;i<=n;i++){
        if(i%2!=0){
            sum = sum + i;
        }
        else {sum = sum - i;}
    }
    printf("The Sum is : %d",sum);
    return 0;
}

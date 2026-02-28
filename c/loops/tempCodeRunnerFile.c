#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d\n",&n);
    printf("%d",n);
    // now using for loop
    for(int i = 0; i <=n; i++){
        printf("%d ",i);
    }
    return 0;
}
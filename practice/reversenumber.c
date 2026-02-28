#include<stdio.h>
int main(){
    int n, d;
    printf("Enter number : ");
    scanf("%d",&n);
    d = n;
    int r = 0;
    int lastdigit = 0;
    while(n!=0){
        lastdigit = n%10;
        r = (r *10) + lastdigit;
        n = n/10;
        // r++;//iski koi jarurt nahi hai
    }
    printf("Reverse of %d is : %d",d,r);
    return 0;
}
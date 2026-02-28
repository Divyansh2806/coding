#include<stdio.h>
int main(){
    int n,d, sum;
    printf("Enter number : ");
    scanf("%d",&n);
    d = n;
    int r = 0;
    int lastdigit = 0;
    while (n!=0)
    {
        lastdigit = n%10;
        r = (r * 10)+lastdigit;
        n = n/10;
    }
    printf("Reveresd number is : %d",r);
    sum = d + r;
    printf("\nsum of %d and %d is : %d",d,r,sum);
    return 0;
}
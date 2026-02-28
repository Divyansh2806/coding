#include<stdio.h>
int main(){
    int a = 2;
    int n;
    printf("Enter nth term : ");
    scanf("%d",&n);
    int power = 1;
    for(int i = 1;i<=n;i++){
        power = power * a;
        printf("%d raised to the power %d is : %d\n",a,i,power);
    }
    return 0;
}
// #include<stdio.h>
// int main(){
//     int a , b ,power;
//     printf("Enter a : ");
//     scanf("%d",&a);
//     printf("Enter b : ");
//     scanf("%d",&b);
//     power = 1;
//     for(int i = 1; i <=b; i++){
//         power = power * a;
//     }
//     printf("%d raised to the power %d is : %d\n",a,b,power); 
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number : ");
//     scanf("%d",&n);
//     for(int i = 0; i<=100;i++){
//         if(i%2==0){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n ,d, lastdigit ,sum;
//     printf("Enter number : ");
//     scanf("%d",&n);
//     d = n;
//     sum = 0;
//     while(d!=0){
//         lastdigit = d%10;
//         if(lastdigit%2!=0){
//         printf("%d",lastdigit);
//         sum = sum + lastdigit;
//         }
//         d = d/10;
//     }
//     printf("\nThe sum of even number for %d is : %d",n,sum);
// return 0;
// }




#include<stdio.h>
int main(){
    int n ,d, lastdigit ,sum;
    printf("Enter number : ");
    scanf("%d",&n);
    d = n;
    sum = 0;
    printf("Even Digits : ");
    while(d!=0){
        lastdigit = d%10;
        if(lastdigit%2==0){
            printf("%d ",lastdigit);
            sum = sum + lastdigit;
        }
        d = d/10;
    }
    printf("\nThe sum of even number form %d is : %d",n,sum);
return 0;
}
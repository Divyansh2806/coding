// #include<stdio.h>
// int main(){
//     int i = 1;
//     while (i<=100)
//     {
//         if(i%2!=0){
//         printf("%d ",i);
//         }
//         i++;
//     }
//     return 0;
    
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number : ");
//     scanf("%d",&n);
//     int count = 0;
//     while (n!=0)
//     {
//        n = n/10;
//        count++; 
//     }
//     printf("the number of digits is : %d",count);
    
// }


#include<stdio.h>
int main(){
    int n ,d, lastdigit ,sum;
    printf("Enter number : ");
    scanf("%d",&n);
    d = n;
    sum = 0;
    while(d!=0){
        lastdigit = d%10;
        sum = sum + (lastdigit * lastdigit * lastdigit);
        d = d/10;
    }
    if(sum == n){
        printf("%d is a armstrong number",n);
    }
    else{
        printf("%d is not a armstrong number",n);

    }
    // printf("The sum of %d is : %d",n,sum);
return 0;
}
#include<stdio.h>
int main(){
    // int n;
    // printf("Enter n : ");
    // scanf("%d",&n);
    int a;
         printf("\nEnter first number(a) : ");
             scanf("%d",&a);
    int m;
         printf("\nEnter difference b/t number(m) : ");
             scanf("%d",&m);
    
    // for(int i = a;a>=0;i++){//aap yaha condition kuch bhi de sakte ho 
    //      printf("%d ",a);
    //     a = a-m;
    // }
    for(int i = a;i>=0;i=i-3){//or i-=3
         printf("%d ",i);     // a ka yaha par koi rol nahi hai 
    }
    return 0;
}
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter number : ");
//     scanf("%d",&num);
//     for(int i = 1;i<=num;i++){

//         printf("%2d) I Love Chut!! \n",i);
//     }
//     return 0;
// }
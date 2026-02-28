// // #include<stdio.h>
// // int main(){
// //     // int n;
// //     // printf("Enter n : ");
// //     // scanf("%d",&n);
// //     int a = 100;
// //     for (int i = 50; i >=0; i--)
// //     {
// //         printf("%d ",a);
// //         a = a - 2;
// //     }
// //     return 0;
// // }

#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int a = 100;
    for(int i = 1; a>=n;i++){
        printf("%d ",a);
        a = a-2;
    }
    return 0;
}



// // #include<stdio.h>
// // int main(){
// //     int a;
// //     printf("Enter a : ");
// //     scanf("%d",&a);
// //     printf("%d",a);
    
// //     return 0;
// // }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n : ");
//     scanf("%d\n",&n);
//     printf("%d",n);
//     // now using for loop
//     for(int i = 0; i <=n; i++){
//         printf("%d ",i);
//     }
//     return 0;
// }

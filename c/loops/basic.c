// #include<stdio.h>
// int main(){
//     int num;
//     printf("Emter num : ");
//     scanf("%d",&num);
//     printf("Table of %d is given below :- \n",num);
//     for (int i = 1; i <=10; i++)
//     {
//         printf("%d X %d = %d\n",num, i ,i*num);
//     }
//     return 0;
// }




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
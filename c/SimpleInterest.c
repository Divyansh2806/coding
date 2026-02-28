// #include<stdio.h>
// int main (){
//     float p , r , t , si;
//     p = 152;
//     r = 10;
//     t = 3;
//     si = (p * r * t)/100;
//     printf("Simple Interest is : %f",si);
//     return 0;
// }



// simple Interest By Taking Input
#include<stdio.h>
int main(){
    float principal , rate , time , si;
    printf("Enter principal : ");
    scanf("%f",&principal);
    printf("Enter rate : ");
    scanf("%f",&rate);
    printf("Enter time : ");
    scanf("%f",&time);
    si = (principal * rate * time)/100;
    printf("Simple Interest is :%f",si);
    return 0;
}
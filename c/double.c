#include<stdio.h>
#include<stdbool.h>
int main(){
    //  double num = 79.89465116;
    // printf("double number is: %.8lf",num);
    // int a = 100;
    // char b = a;
    // float c = a;
    // printf("%d\n",a);
    // printf("%.1f\n",c);
    // printf("%c",a);


    // bool isprogrammingfun = true;
    // bool isnitfun = false;

    // printf("%d\n",isprogrammingfun);
    // printf("%d",isnitfun);

    // printf("%d", 10 == 19); 

    int myage;
    printf("Enter age: ");
    scanf("%d",&myage);
    
    int votingage = 18;
    // scanf("%d",&myage);

    printf("%d\n",myage >= votingage);
    if(myage>=votingage){
        printf("eligible to vote");
    }else{
        printf("not eligible to vote");
    }
    return 0;
}
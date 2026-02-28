// // // #include<stdio.h>
// // // int main(){
// // //     int a = 5;
// // //     printf("%d\n",a);

// // //     int *x = &a;
// // //     printf("%p\n",x);
// // //     printf("%p\n",&a);
// // //     printf("%p\n",&x);
// // //     printf("%d\n",*x);
// // //     return 0;

// // // }

// // #include<stdio.h>
// // void swap(int *x , int *y){
// //     int temp;
// //     temp = *x;
// //     *x = *y;
// //     *y = temp;
// //     return;
// // }
// // int main(){
// //     int a , b;
// //     printf("Enter a : ");
// //     scanf("%d",&a);
// //     printf("Enter b : ");
// //     scanf("%d",&b);
// //     swap(&a,&b);
// //     printf("The value of a : %d\n",a);
// //     printf("The value of b : %d\n",b);
// //     return 0;
// // }



#include<stdio.h>
int main(){
    int a = 28;
    int *x = &a;
    int **y = &x;
    int ***z = &y;
    ***z = 29;//a ki value changed to 29
    printf("%d\n",a);//a ki value print kar raha hai
      printf("%p\n",&a); //a ka address print kar raha hai
         printf("%p\n",x);//yeh bhi a ka address print kar raha hai
             printf("%p\n",&x);//yeh x ka address peint kar raha hai
                 printf("%d\n",*x);//yeh x mai a ki value (29)voh print kar raha hai
    
    printf("\n");

         printf("%p\n",y);//x ka address print kar raha hai
             printf("%p\n",&y);//yeh khud(y)ka add.print kar raha hai
                 printf("%d\n",**y);//yeh y mai a ki value (29)voh print kar raha hai

    printf("\n");

         printf("%p\n",z);//y ka address print kar raha hai
             printf("%p\n",&z);//yeh khud(z)ka add.print kar raha hai
                 printf("%d\n",***z);//yeh y mai a ki value (29)voh print kar raha hai

    return 0;
}
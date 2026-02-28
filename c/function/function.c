// // // #include<stdio.h>
// // // void india(){
// // //     printf("You are in india\n");
// // //     void england();
// // //     england();
// // //     return;
// // // }
// // // void england(){
// // //     printf("you are in England\n");
// // //     void africa();
// // //     africa();
// // //     return;
// // // }
// // // void africa(){
// // //     printf("you are in africa\n");
// // //     return;
// // // }

// // // int main(){
// // //     void india();
// // //     india();
// // //     return 0;
// // // }


// #include<stdio.h>
// void fun(){
//     int x;
//     scanf("%d",&x);
//     for (int i = x; i<=100; i++)
//     {
//         printf("%d\n",i);
//     }
//     return;
    
// }
// int main(){
//     printf("Enter x : ");
//     // scanf("%d",&x);
//     fun();
//     return 0;
// }




// // #include<stdio.h>
// // int main(){
// //     printf("Odd numbers from 1 to 100 are : \n");
// //     for (int i =0; i <=100; i++)
// //     {
// //         if(i%2==0){
// //             printf("%d\n",i+1);
// //         }
// //     }
    
// //     return 0;
// // }



#include<stdio.h>
#include<string.h>
void even(){
    for (int i = 0; i <=100; i++)
    {
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return;
}
void odd(){
    for (int i = 0; i <=100; i++)
    {
        if(i%2==0){
            printf("%d\n",i+1);
        }
    }
    return;
}

int main(){                                                                     
    char str[100];
    printf("printing numbers from 1 to 100 odd or even\n");
    printf("what you want - odd or even(in small) : ");
    gets(str);
    if(even==even){
        even();
    }
    else {
        void odd();
        odd();
    }
    
    return 0;
}
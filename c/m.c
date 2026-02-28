// #include<stdio.h>
// int main(){
//     // char name[] = "divyansh rajput";
//     // printf("%s",name);
//     // char Str name[]  = "divyansh";
//     // printf("%s",name);


//     // int age;
//     // printf("Enter age: ");
//     // scanf("%d",&age);
    
//     // int votingAge = 18;
//     // (age>=18)?  printf("eligible to vote") :  printf("not eligible to vote");

//     // char name[45];
//     // printf("enter your name first: ");
//     // scanf("%s",&name);

//     // int doorcode;
//     // printf("Enter Door code: ");
//     // scanf("%d",&doorcode);
//     // if(doorcode == 1023){
//     //     printf("correct Code.\nThe door is now open.");
//     // }
//     // else{
//     //     printf("incorrect code.\nDoor remain closed.");
//     // }

//     int num;
//     printf("enter a number :");
//     scanf("%d",&num);

//     if(num%2==0){
//         printf("the number you entered is even.");
//     }
//     else{
//         printf("the number you entered is odd");
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
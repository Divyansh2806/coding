// // // #include<stdio.h>
// // // int main(){
// // //     // int a;
// // //     // printf("enter number: ");
// // //     // scanf("%d",&a);

// // //     // while(a<5){
// // //     //     printf("%d\n",a);
// // //     //     a++;
// // //     // }

// // //     int countdown;
// // //     printf("enter countdown: ");
// // //     scanf("%d",&countdown);
// // //     while(countdown > 0){
// // //         printf("%d\n",countdown);
// // //         countdown--;
// // //     }
// // //     printf("Happy new year");
// // //     return 0;
// // // }


// // #include<stdio.h>
// // int main() {
// //     int a=5, b=3;
// //     a = a + b; // a=8
// //     b = a - b; // b=5
// //     a = a - b; // a=3
// //     printf("a=%d b=%d", a, b);
// //     return 0;
// // }


// #include <stdio.h>

// int main() {
//   // Set the maximum possible score to 500
//   int maxScore;
//   scanf("%d",&maxScore);

//   // The actual score of the user
//   int userScore;
//   scanf("%d",&userScore);

//   // Calculate the percantage of the user's score in relation to the maximum available score
//   float percentage = (float) userScore / maxScore * 100.0;

//   // Print the percentage
//   printf("User's percentage is %.3f", percentage);

//   return 0;
// }


#include <stdio.h>

int main() {
//   float sum = 5 / 2;
int i = 5; printf("%d", ++i);
printf("\n%d",i);
//   printf("%f", (float)sum);  /// 2.000000
  return 0;
}
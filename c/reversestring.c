// // // #include <stdio.h>
// // // #include <string.h> // For strlen()

// // // int main() {
// // //     char str[100]; // Array to store the string
// // //     // int i, length;

// // //     printf("Enter a string: ");
// // //     gets(str); // Taking string input

// // //     int length = strlen(str); // Finding string length

// // //     printf("Reversed string: ");
// // //     for(int i = length - 1; i >= 0; i--) { // Print from last to first
// // //         printf("%c", str[i]);
// // //     }

// // //     printf("\n");

// // //     return 0;
// // // }

// // #include<stdio.h>
// // #include<string.h>
// // int main(){
// //     char str[100];
// //     printf("enter a string : ");
// //     gets(str);

// //     int length = strlen(str);

// //     printf("Reversed string : ");
// //     for (int i = length - 1; i>=0; i--)
// //     {
// //         printf("%c",str[i]);
// //     }
// //     return 0;
// // }

// #include<stdio.h>
// #include<string.h>
// int main(){
// char str[100];
// printf("Enter a string : ");
// gets(str);

// int length = strlen(str);
// printf("Reversed string : ");
// for (int i = length - 1; i>=0; i--)
// {
//     printf("%c",str[i]);
// }
// return 0;
// }



#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a String : ");
    gets(str);
    printf("%s",str);

    int length = strlen(str);
    printf("\nlength of string : %d\n",length);

    for (int i = length -1; i>=0; i--)
    {
        printf("%c\n",str[i]);
    }
    

    return 0;
}
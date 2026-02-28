// // #include<stdio.h>
// // #include<string.h>
// // void even(){
// //     for (int i = 0; i <=100; i++)
// //     {
// //         printf("%d\n",i);
// //     }
// //     return;
// // }
// // void odd(){
// //     for (int i = 0; i <=100; i++)
// //     {
// //         printf("%d\n",i+1);
// //     }
// //     return;
// // }

// // int main(){
// //     char str[100];
// //     printf("printing numbers from 1 to 100 odde or even\n");
// //     printf("what you want - odd or even(in small) : ");
// //     gets(str);
// //     if(str==even){
// //         even();
// //     }
// //     if else(str==odd){
// //         odd();
// //     }
    
// //     return 0;
// // }




// #include <stdio.h>
// #include <string.h>

// void even() {
//     for (int i = 0; i <= 100; i++) {
//         if (i % 2 == 0) {
//             printf("%d\n", i);
//         }
//     }
// }

// void odd() {
//     for (int i = 0; i <= 100; i++) {
//         if (i % 2 != 0) { // corrected logic
//             printf("%d\n", i);
//         }
//     }
// }

// int main() {
//     char str[100];
//     printf("Printing numbers from 1 to 100 (odd or even)\n");
//     printf("What do you want - odd or even (in small letters): ");
//     fgets(str, sizeof(str), stdin);

//     // Remove newline character from fgets input
//     str[strcspn(str, "\n")] = '\0';

//     if (strcmp(str, "even") == 0) {
//         even();
//     } else if (strcmp(str, "odd") == 0) {
//         odd();
//     } else {
//         printf("Invalid input. Please enter 'odd' or 'even'.\n");
//     }

//     return 0;
// }




#include <stdio.h>
#include <string.h>

void even() {
    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
}

void odd() {
    for (int i = 0; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
}

int main() {
    char str[100];

    printf("This program prints odd or even numbers from 1 to 100.\n");
    printf("Type 'odd' or 'even' (in small letters) or type 'exit' to quit.\n");

    while (1) {  // infinite loop
        printf("\nWhat do you want - odd or even: ");
        fgets(str, sizeof(str), stdin);

        // Remove newline character from input
        str[strcspn(str, "\n")] = '\0';

        if (strcmp(str, "even") == 0) {
            even();
        } else if (strcmp(str, "odd") == 0) {
            odd();
        } else if (strcmp(str, "exit") == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;  // exit the loop
        } else {
            printf("Invalid input. Please enter 'odd', 'even', or 'exit'.");
        }
    }

    return 0;
}

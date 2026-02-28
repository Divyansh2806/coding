// #include<stdio.h>
// #include<string.h>
// int main(){
// char str[100];
//      printf("Enter string : ");
//          gets(str);
//      printf("Entered string is : %s",str);

// int i, j, temp;
//  i = 0;
//  j = strlen(str)-1;
// while(i<j){
//      temp = str[i];
//      str[i] = str[j];
//      str[j] = temp;
//      i++;
//      j--;
// }
//      printf("\nReverse of string is : %s",str);
// return 0;
// }






#include<stdio.h>
#include<string.h>
int main(){
     char str[100];
     printf("Enter String : ");
     gets(str);
     printf("Entered String : %s",str);
     int i, j, temp;
     i = 0;
     j = strlen(str) - 1;
     // printf("%d",j);
     while(i<j){
          temp = str[i];
          str[i] = str[j];
          str[j] = temp;
          i++;
          j--;
     }
     printf("\nReverse of string is : %s",str);
     return 0;
}
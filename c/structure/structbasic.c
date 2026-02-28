#include<stdio.h>
struct mystructure{
int mynum;
char myname[];
};
int main(){
    struct mystructure s1;
    // // s1.mynum = 133;
    // // s1.myname = 'D';        //giving input here


    s1.mynum;
         printf("Enter number : ");
             scanf("%d",&s1.mynum);
    s1.myname;                  // taking input here
         getchar();                     
             printf("Enter first letter : ");
                 scanf("%s",&s1.myname);



    printf("My number is : %d\n",s1.mynum);
    printf("My name first letter is : %s\n ",s1.myname);

    return 0;
}
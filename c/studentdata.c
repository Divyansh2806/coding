#include<stdio.h>
int main(){
    //student data
    char studentname[100];
    printf("Enter student name: ");
    scanf("%s",&studentname);
    printf("student Name: %s\n",studentname);
    
    int studentage;
    printf("\nenter student age:");
    scanf("%d",&studentage);
    printf("student age:%d\n",studentage);
 
    int studentid;
    printf("\nenter student id:");
    scanf("%d",&studentid);
    printf("studentid:%d \n",studentid);

    float studentfees;
    printf("\nenter student fees:");
    scanf("%f",&studentfees);
    printf("sutdent fees:%f \n",studentfees);    
    
    char ch;
    printf("\nenter student grade:");
    scanf(" %c",&ch);
    printf("student grade:%c ",ch);
    return 0;

}





// #include<stdio.h>
// int main(){
//     float length;
//     printf("Enter length: ");
//     scanf("%f",&length);
//     float width;
//     printf("Enter width: ");
//     scanf("%f",&width);
//     float area = length * width;
//     printf("The area of rectangle is: %f",area);
// }
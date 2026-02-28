#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a String : ");
    gets(str);
    printf("%s",str);
    int i , j;
    char temp;
    i = 0;
    j = strlen(str) - 1;

    while (i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("\nReversed String : %s\n\n",str);
}
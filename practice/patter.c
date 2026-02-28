// #include<stdio.h>
// int main(){
//     int row ,column;
//     printf("Enter rows : ");
//     scanf("%d",&row);
//     printf("Enter column : ");
//     scanf("%d",&column);
//     for (int i = 0; i <row; i++)
//     {
//         for (int i = 0; i <column; i++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


#include<stdio.h>
int main(){
    int square;
    printf("Enter rows for square : ");
    scanf("%d",&square);
    for (int  i = 1; i <=square; i++)
    {
        for (int j = 1; j <=square; j++)
        {
            printf("* ",j);
        }
        printf("\n");
    }
    return 0;
}
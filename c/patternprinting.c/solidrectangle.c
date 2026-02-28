#include <stdio.h>
int main()
{
    printf("solid Rectangle\n");
    int r, c;
    printf("enter Rows : ");
    scanf("%d", &r);

    printf("enter column : ");
    scanf("%d", &c);

    for (int i = 1; i <=r; i++)  //no. of rows
    {
        for (int j = 1; j <=c; j++) //no. of column
        {
            printf("%d", j);//we can also use %d(for no.) and *. 
        }
        printf("\n");
    }

    return 0;
}



// // solid Square
// #include <stdio.h>
// int main()
// {
//     printf("solid square\n");
//     int r, c;
//     printf("enter Rows : ");
//     scanf("%d", &r);

//     printf("enter column : ");
//     scanf("%d", &c);

//     for (int i = 1; i <=r; i++)  //no. of rows
//     {
//         for (int j = i; j <=c; j++) //no. of column
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
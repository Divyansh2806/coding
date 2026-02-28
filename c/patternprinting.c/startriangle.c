// #include <stdio.h>
// int main()
// {
//     printf("solid Rectangle\n");
//     int r, c;
//     printf("enter Rows : ");
//     scanf("%d", &r);

//     for (int i = 1; i <=r; i++)  //no. of rows
//     {
//         for (int j = 1; j<=i; j++) //no. of column
//         {
//             printf("%d ", j);//we can also use %d(for no.) and *. 
//         }
//         printf("\n");
//     }

//     return 0;
// }


#include <stdio.h>
int main()
{
    printf("solid Rectangle\n");
    int r, a;
    printf("enter Rows : ");
    scanf("%d", &r);
    a = r;

    for (int i = 1; i <=r; i++)  //no. of rows
    {
        for (int j = 1; j<=a; j++) //no. of column
        {
            printf("%d ",j);//we can also use %d(for no.) and *. 
        }
        a--;
        printf("\n");
    }

    return 0;
}
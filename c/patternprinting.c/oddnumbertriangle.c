// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter n : ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         int a = 1;//isko for loop ke bhahar try karna ek baar
//         for (int j = 1; j <= n; j++)
//         {
//             printf("%d ", a);
//             a = a + 2;
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;//isko for loop ke bhahar try karna ek baar
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}
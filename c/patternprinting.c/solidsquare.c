#include <stdio.h>
int main()
{
    int r;
    printf("enter rows and column as rows = column : ");
    scanf("%d",&r);
    int c = r;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
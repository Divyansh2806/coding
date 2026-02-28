// #include <stdio.h>
// void incresing(int x,int n)
// {
//     if (x>n)
//         return;
//     printf("%d\n",x);
//     incresing(x + 1,n);
//     return;
// }
// int main()
// {
//     int n;
//     printf("Enter n : ");
//     scanf("%d", &n);
//     incresing(1,n);
//     return 0;
// }

#include <stdio.h>
void incresing(int x, int n)
{
    // base case
    if (x > n)
        return;
    printf("%d", x);
        incresing(x + 1, n);
    return;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    incresing(1, n);
    return 0;
}
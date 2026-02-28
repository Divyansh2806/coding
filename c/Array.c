#include<stdio.h>
int main(){
    int mynumbers[] = {25 , 45, 60, 75, 100};
    printf("%d\n",mynumbers[1]);
    
    mynumbers[1] = 33;
    printf("%d\n",mynumbers[0]);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",mynumbers[i]);
    }
    
    return 0;
}
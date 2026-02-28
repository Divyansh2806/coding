// // Volumeofsphere without taking input
// #include<stdio.h>
// int main()
// {
//     float radius = 5;
//     printf("Enter Radius :%f",radius);
//     // scanf("%f",&radius);
//     float pi = 3.1415;
//     float volume = (4 * pi * radius * radius * radius)/3;

//     printf("\nVolume of Sphere is : %f",volume);
//     return 0;

// }

//Volumeofsphere by taking input
#include<stdio.h>
int main()
{
    float radius;
    printf("Enter Radius :");
    scanf("%f",&radius);
    float pi = 3.1415;
    float volume = (4 * pi * radius * radius * radius)/3;

    printf("Volume of Sphere is : %f",volume);
    return 0;

}
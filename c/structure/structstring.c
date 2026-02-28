#include<stdio.h>
struct mycar{
    char brand[100];
    char model[100];
    int year;
};
int main(){
    struct mycar c1 = {"BWM", "M5cs", 2024};
    struct mycar c2 = {"Toyota", "Fortuner", 2023};
    struct mycar c3 = {"Tata", "Harrier", 2026};

    printf("Brand name : %s\n" " model of car : %s\n " "year : %d\n",c1.brand, c1.model, c1.year);
    printf("Brand name : %s\n" " model of car : %s\n " "year : %d\n",c2.brand, c2.model, c2.year);
    printf("Brand name : %s\n" " model of car : %s\n " "year : %d\n",c3.brand, c3.model, c3.year);
    return 0;
}

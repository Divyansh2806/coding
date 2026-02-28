#include<iostream>
using namespace std;
int main(){
    float pi , r , v;
    pi = 3.141592;
    cout<<"Enter Radius: ";
    cin>>r;
    v = (4 * pi * r * r * r)/3;
    cout<<"Your Volume of Sphere is: "<<v;
}
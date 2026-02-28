#include<iostream>
using namespace std;
int main(){
    // int x=3, y=5;
    // if(x==3)
    //   cout<<x;
    // else
    // cout<<y;
    int x=3, y, z;
    y=x=10;
    z=x<10;        //false statement that's why 0;
    // z=x>=10;   //true statement that's why 1;
    cout<<x<<" "<<y<<" "<<z;
}
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter A integer : ";
    cin>>x;
    float y = (float)x; //typecasting
    // y = x; // ase nahi karte hai yeh galat hota hai
 
    cout<<"Half of Integer is : "<<y/2;
}
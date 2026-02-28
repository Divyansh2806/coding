#include<iostream>
using namespace std;
int main (){
    int l , b;
    cout<<"Enter Length : ";
    cin>>l;
     cout<<"Enter Breath : ";
    cin>>b;
    int a = l * b;
    int p = (l + b) * 2; 
    cout<<"Area  of Rectangle is : "<<a<<endl;
    cout<<"Perimeter of rectangle is : "<<p<<endl;

    if(a>p){
        cout<<"Area is greater than Perimeter";
    }
    else{
        cout<<"none";
    }

}
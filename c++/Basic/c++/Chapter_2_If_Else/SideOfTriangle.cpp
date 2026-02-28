#include<iostream>
using namespace std;
int main(){
    int a , b ,c;
    cout<<"Enter 1st side : ";
    cin>>a;
    cout<<"Enter 2nd side : ";
    cin>>b;
    cout<<"Enter 3rd side : ";
    cin>>c;
     if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"Valid Triangle";
        // cout<<"a,b and c are side of triangle ";
     }
     else{
        cout<<"Invalid Triangle";
        // cout<<"a,b and c are not side of triangle ";
     }
}




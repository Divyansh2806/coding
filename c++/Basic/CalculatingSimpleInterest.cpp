#include<iostream>
using namespace std;
int main(){
    float p , r , t , si;
    cout<<"Enter Principle: ";
    cin>>p;
    // cout<<p<<endl;
    cout<<"Enter Rate: ";
    cin>>r;
    cout<<"Enter Time: ";
    cin>>t;
    si=(p * r * t)/100;
    cout<<"Your simple Interest is: "<<si;

}
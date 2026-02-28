#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    
    if(n>99 && n<1000){
        cout<<"It is a Three Digit Number";
    }
    else{
        cout<<"It is Not a Three Digit Number";
    }
}
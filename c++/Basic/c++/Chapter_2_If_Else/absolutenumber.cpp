#include<iostream>
using namespace std;
int main(){
      int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n>=0){
        cout<<"Absolute Value is ";
        cout<<n;
    }
    else{ //yaha par n ki vallue hain n = -n
        // n = -n; yeh nahi karna galat hai yeh
        cout<<"Absolute value is ";
        cout<<-n;
    }

    // if you want you can change n to its absolute vale with this 
    // if(n<0) n = -n;
    // cout<<n;
} 
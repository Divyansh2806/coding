#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    // if(n%5==0 && n%3==0){
    //     cout<<"Given Number is divisible by 5 and 3";
    // }

    if(n%15==0){
        cout<<"Given Number is divisible by 5 and 3";
    }
    else{
        cout<<"Given Number is not divisible by 5 and 3";
    }
    
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a integer : ";
    cin>>n;
    if((n%5==0 or n%3==0) && n%15!=0 ){
        cout<<"Number is divisible by 5 and 3 and not divisible by 15";
    }
    else{
        cout<<"Number is not divisible by 5 and 3 and not divisible by 15";
    }
}
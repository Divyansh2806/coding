#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;

    // (n%2==0) ? cout<<"Even number": cout<<"odd number";


    ((n%5==0 || n%3==0) && n%15!=0) ? cout<<"divisible": cout<<"not divisible";
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i = 1; i<=n*10; i=i+1){
        if(i%n==0){
            cout<<"2 multiply by "i": "<<i<<endl;
        }
    }
}
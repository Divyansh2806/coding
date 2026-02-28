#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter cost price : ";
    cin>>cp;

    int sp;
    cout<<"Enter selling price : ";
    cin>>sp;

    if(sp>cp){
        cout<<"Profit"<<endl;
        cout<<"Total Profit : "<<sp-cp;
    }
    
//     if(sp<cp){
//         cout<<"Loss"<<endl;
//         cout<<"Total loss : "<<cp-sp;
//     }

//      if(sp==cp){
//         cout<<"No Profit No losss";
//     }

   else if(sp<cp){
        cout<<"Loss"<<endl;
        cout<<"Total loss : "<<cp-sp;
    }

     else{
        cout<<"No Profit No losss";
    }
}
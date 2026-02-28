// #include<iostream>
// using namespace std;
// int main(){
//         int Ram , Shyam ,Ajay;
//     cout<<"Enter 1st number: ";
//     cin>>Ram;
//     cout<<"Enter 2nd number : ";
//     cin>>Shyam;
//     cout<<"Enter 3rd number : ";
//     cin>>Ajay;
//         if(Ram<Shyam){
//         if(Ram<Ajay){
//             cout<<Ram<<" is Youngest";
//         }
//         else{
//             cout<<Ajay<<" is Youngest";
//         }
//     }

//     else{
//         if(Shyam<Ajay){
//             cout<<Shyam<<" is Youngest";
//         }
//         else{
//             cout<<Ajay<<" is Youngest";
//         }
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int Ram, Shyam, Ajay;
    cout<<"Enter Ram's Age : ";
    cin>>Ram;
    cout<<"Enter Shyam's Age : ";
    cin>>Shyam;
    cout<<"Enter Ajay's Age : ";
    cin>>Ajay;

    if(Ram<Shyam){
        if(Ram<Ajay){
            // cout<<Ram<<" is youngest";
            cout<<"Ram is Youngest";
        }
        else{
            // cout<<Ajay<<" is youngest";
            cout<<"Ajay is Youngest";
        }
    }
    else{
        if(Shyam<Ajay){
            // cout<<Shyam<<" is youngest";
            cout<<"Shyam is Youngest";
        }
        else{
            // cout<<Ajay<<" is youngest";
            cout<<"Ajay is Youngest";
        }
    }
}
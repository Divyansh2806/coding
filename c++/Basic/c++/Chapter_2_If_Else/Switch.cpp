#include<iostream>
using namespace std;
int main(){
      int n1;
    cout<<"Enter 1st number : ";
    cin>>n1;
    float m1 = (float)n1;        //type casting
    
    char op;
    cout<<"Enter operator:";
    cin>>op;
    
    int n2;
    cout<<"Enter 2nd number : ";
    cin>>n2;
    float m2 = (float)n2;        //type casting
    switch (op)
    {
    case '+':
        cout<<"output is: "<<m1+m2<<endl;
        break;
    case '-':
        cout<<"output is: "<<m1-m2<<endl;
        break;
    case '*':
        cout<<"output is: "<<m1*m2<<endl;
        break;
    case '/':
        cout<<"output is: "<<m1/m2<<endl;
        break;
    default:
        cout<<"Invalid Operator";
        break;
    }
}
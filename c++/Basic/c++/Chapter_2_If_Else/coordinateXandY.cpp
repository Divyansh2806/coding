#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"Enter x : ";
    cin>>x;
    cout<<"Enter y : ";
    cin>>y;
//     if(x==0 && y==0){
//         cout<<"x and y is on origin";
//     }
//     else if(x==+x && y==+y){
//         cout<<"x and y are in first coordinate";
//     }
//     else if(x==-x && y==+y){
//         cout<<"x and y are in second coordinate";
//     }
//     else if(x==-x && y==-y){
//         cout<<"x and y are in third coordinate";
//     }
//     else if(x==+x && y==-y){
//         cout<<"x and y are in forth coordinate";
//     }

    if(x>0 && y>0){
        cout<<"Quadrant first";
    }
    else if(x<0 && y>0){
        cout<<"Quadrant second";
    }
    else if(x<0 && y<0){
        cout<<"Quadrant third";
    }
    else if(x>0 && y<0){
        cout<<"Quadrant forth";
    }
    else if(x==0 && y!=0){
        cout<<"on the y axis";
    }
    else if(x!=0 && y==0){
        cout<<"on the x axis";
    }
    else{
        cout<<"at the origin";
    }

}
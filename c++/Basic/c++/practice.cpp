// // #include<iostream>
// // using namespace std;
// // int main(){
// //     for(int i=1; i<=15; i++){
// //         cout<<"Hello Divyansh"<<endl;
// //     }
// // }

#include<iostream>
using namespace std;
int main(){
    int  x, y;
    cout<<"Enter x : ";
    cin>>x;
    cout<<"Enter y : ";
    cin>>y;
    // if(x%2==0 && y%2==0){
    //     cout<<"even number"<<endl;
    // }
    // else{
    //     cout<<"odd number"<<endl;
    // }
    // if(x%2==0){
    //     cout<<x<<" even number"<<endl;
    // }
    //      else{
    //         cout<<x<<"odd number"<endl;
    //      }
    // if(y%==2){
    //     cout<<y<<" even number";
    //     else{
    //         cout<<"odd Number";
    //     }
    // }     


    if (x>0 && y>0){
        cout<<"Quadrant 1";
    }
    else if (x<0 && y>0){
        cout<<"Quardrant 2";
    }
    else if(x<0 && y<0){
        cout<<"Quadrant 3";
    }
    else if (x>0 && y<0){
        cout<<"Quadrant 4";
    }
    else if(x==0 && y!=0){
        cout<<"on the y axis";
    }
    else if(x!=0 && y==0){
        cout<<"on the x axis";
    }
    else{
        cout<<"on the origin";
    }
    
}


// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter A integer : ";
//     cin>>x;
//     char y = (char)x; //typecasting
//     // y = x; // ase nahi karte hai yeh galat hota hai
 
//     // cout<<"Half of Integer is : "<<y/2;
//     cout<<y;
// }

// // C++ program to convert number into words by breaking 
// // it into groups of three

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// string convertToWords(int n) {
//     if (n == 0) 
//         return "Zero";
    
//     // Words for numbers 0 to 19
//     vector<string> units = {
//         "",        "One",       "Two",      "Three",
//         "Four",    "Five",      "Six",      "Seven",
//         "Eight",   "Nine",      "Ten",      "Eleven",
//         "Twelve",  "Thirteen",  "Fourteen", "Fifteen",
//         "Sixteen", "Seventeen", "Eighteen", "Nineteen"
//     };
    
//     // Words for numbers multiple of 10        
//     vector<string> tens = { 
//         "",     "",     "Twenty",  "Thirty", "Forty",
//         "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" 
//     };
    
//     vector<string> multiplier = 
//                     {"", "Thousand", "Million", "Billion", "trillion"};
  
//     string res = "";
//     int group = 0;
    
//     // Process number in group of 1000s
//     while (n > 0) {
//         if (n % 1000 != 0) {
            
//             int value = n % 1000;
//             string temp = "";
            
//             // Handle 3 digit number
//             if (value >= 100) {
//                 temp = units[value / 100] + " Hundred ";
//                 value %= 100;
//             }

//             // Handle 2 digit number
//             if (value >= 20) {
//                 temp += tens[value / 10] + " ";
//                 value %= 10;
//             }

//             // Handle unit number
//             if (value > 0) {
//                 temp += units[value] + " ";
//             }

//             // Add the multiplier according to the group
//             temp += multiplier[group] + " ";
            
//             // Add this group result to overall result
//             res = temp + res;
//         }
//         n /= 1000;
//         group++;
//     }
    
//     // Remove trailing space
//     return res.substr(0, res.find_last_not_of(" ") + 1);
// }

// int main() {
//     int n;
//     cout<<"Enter an integer : ";
//     cin>>n;
//     cout << convertToWords(n) << endl;
//     return 0;
// }


// Write a program to demonstrate the use of returning a reference variable
// #include<iostream>
// using namespace std;

// int & min(int &x,int &y);

// int main(){
//     int x=5,y=10;
//     cout<<x<<"\t"<<y<<endl;
//     min(x,y)=0;
//     cout<<x<<"\t"<<y;
//     return 0;
// }
// int & min(int &x,int &y){
//     if(x<y){
//         return x;
//     }
//     else{
//         return y;
//     }
// }


#include<iostream>
using namespace std;

int& min(int &a,int &b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int a=10,b=20;
    cout<<a<<"\t\t"<<b<<endl;
    min(a,b)=0;
    cout<<a<<"\t\t"<<b<<endl;
    return 0;
}
    //The program of static variable.

#include<iostream>
using namespace std;

int staticEx(int x){
    x=10;
    cout<<"The increment of a is : "<<++x<<endl;
    return x;
}

int main(){
    static int a;
    cout<<"The value of a is :"<<staticEx(a)<<endl;
    cout<<"The value of a is :"<<staticEx(a)<<endl;
    cout<<"The value of a is :"<<staticEx(a)<<endl;
    cout<<"The value of a is :"<<staticEx(a)<<endl;
    cout<<"The value of a is :"<<staticEx(a)<<endl;
    cout<<"The value of a is :"<<staticEx(a)<<endl;

    return 0;
}
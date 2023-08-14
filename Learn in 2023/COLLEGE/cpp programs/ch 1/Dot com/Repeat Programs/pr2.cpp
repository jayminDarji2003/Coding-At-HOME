#include<iostream>
using namespace std;

int add(int a,int b = 10){
    int sum;
    sum = a + b;
    return sum;
}
int add(int a,int b,int c){
    return (a+b+c);
}

int main(){
    int x=10,y=10,z=30;

    cout<<"The addition of two no is : "<<add(x)<<endl;
    cout<<"The addition of three no is : "<<add(x,y,z)<<endl;

    return 0;
}
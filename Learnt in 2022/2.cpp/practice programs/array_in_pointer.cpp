#include<iostream>
using namespace std;

int main(){
    int a[2]={1,2};
    int *ptr=a;
    
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<"The value of the a using pointer is :"<<*ptr<<endl;
    ptr++;  //This is the arithmatic of the pointer.
    cout<<"The value of the a using pointer is :"<<*ptr;

    return 0;
}
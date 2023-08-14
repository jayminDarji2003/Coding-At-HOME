// Write a program to swap value one class from  another class
#include<iostream>
using namespace std;

class A{
    public:
        int a;
        void setData(int _a){
            a=_a;
        }
        void dis(){
            cout<<"The value of a is : "<<a<<endl;
        }
    
};

class B{
    public:
        int x;
          void setData(int _x){
            x=_x;
        }
        void dis(){
            cout<<"The value of x is : "<<x<<endl;
        }
};

int main(){
    A obj1;
    B obj2;
    int temp;

    obj1.setData(10);
    obj2.setData(20);

    temp=obj1.a;
    obj1.a=obj2.x;
    obj2.x=temp;


    obj1.dis();
    obj2.dis();

    return 0;
}
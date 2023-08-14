#include<iostream>
using namespace std;

class B;
class A{
    private:
        int a;
    public:
        void get(){
            cout<<"Enter the value of a : ";
            cin>>a;
        }
        void dis(){
            cout<<"The value of a is : "<<a<<endl;
        }
        friend void max(A &,B &);
};
class B{
    private:
        int b;
    public:
        void get(){
            cout<<"Enter the value of B : ";
            cin>>b;
        }
        void dis(){
            cout<<"The value of B is : "<<b<<endl;
        }
        friend void max(A &,B &);
};
void max(A &objA,B &objB){
    if (objA.a >= objB.b)
    {
        cout<<objA.a<<" is max"<<endl;
    }
    else{
        cout<<objB.b<<" is max"<<endl;
    }
    
}

int main(){
    A objA;
    B objB;

    objA.get();
    objB.get();

    objA.dis();
    objB.dis();

    max(objA,objB);
        
    return 0;
}
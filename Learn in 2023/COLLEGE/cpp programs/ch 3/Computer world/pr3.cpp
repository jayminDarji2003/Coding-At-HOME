// This is the 3rd program of the 3rd chpter of computer world book
#include<iostream>
using namespace std;

class Base{
    public:
        // void virtual demo_purevirtual_fun()=0;
        void virtual demo_purevirtual_fun(){
            cout<<"This is main virtual class";
        };
};

class der1:public Base{
    public:
        void virtual demo_purevirtual_fun(){
            cout<<"\n This is derived class 1";
        }
};

class der2:public Base{
    public:
        void virtual demo_purevirtual_fun(){
            cout<<"\n This is derived class 2";
        }
};

int main(){
    Base *p;
    der1 d1;
    der2 d2;

    p=&d1;
    p->demo_purevirtual_fun();

    p=&d2;
    p->demo_purevirtual_fun();

    return 0;
}
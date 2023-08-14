#include<iostream>
using namespace std;

class A{
    private:
        int x;
    public:
        A(){ x=10; }
        friend class B;
};

class B{
    public:
        void display(A &temp){
            cout<<"The value of x="<<temp.x;
        }
};

int main(){
    
    A _a;
    B _b;
    _b.display(_a);
    return 0;
}
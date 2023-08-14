
        //This is the program of friend class...

#include<iostream>
using namespace std;

class A{
    private:
        int x;
    public:
        A(){
            x=10;
        }
        friend class B;
};

class B{
    public:
        void display(A &t){
            cout<<"The value of x="<<t.x;
        }
};

int main(){
    A _a;
    B _b;
    _b.display(_a);
    return 0;
}
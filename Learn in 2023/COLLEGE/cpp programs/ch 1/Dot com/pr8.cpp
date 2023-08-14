// Write a program to use of "this" pointer.
#include<iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        void setData(int a){
                this->a=a;
        }
        void disData(){
            cout<<"The value of a is : "<<a;
        }
};

int main(){
    A t;
    t.setData(101);
    t.disData();
    return 0;
}
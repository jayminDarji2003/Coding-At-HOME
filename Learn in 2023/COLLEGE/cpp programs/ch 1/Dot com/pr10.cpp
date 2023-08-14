// Write a program to call member function of class in the main fuction using pointer to object and pointer to member function
#include<iostream>
using namespace std;

class test{
    public:
        int a;
        void increment();
};
void test::increment(){
    a++;
    cout<<"a is :"<<a;
}

int main(){
    test t;
    test *ptr;

    ptr=&t;
    ptr->a=100;
    ptr->increment();
    return 0;
}
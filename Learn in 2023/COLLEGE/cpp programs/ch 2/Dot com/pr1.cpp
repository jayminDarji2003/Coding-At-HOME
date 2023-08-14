// Using friend function find the maximum number from given two numbers from two different classes.

#include<iostream>
using namespace std;

class B;
class A{
    private:
        int no1;
    public:
        void getData(){
            cout<<"Enter no1 : ";
            cin>>no1;
        }
        friend void max(A &,B &);
};

class B{
    private:
        int no2;
    public:
        void getData(){
            cout<<"Enter no2 : ";
            cin>>no2;
        }
        friend void max(A &,B &);
};
void max(A &obj1,B &obj2){
    if (obj1.no1 >= obj2.no2)
    {
        cout<<"NO1 is max";
    }
    else{
        cout<<"NO2 is max";
    }
}


int main(){
    A a;
    a.getData();
    B b;
    b.getData();
    max(a,b);
    return 0;
}
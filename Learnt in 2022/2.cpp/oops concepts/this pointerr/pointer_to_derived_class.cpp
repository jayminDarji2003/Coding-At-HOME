#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
 public:
        int var_derived;
        void display(){
            cout<<"Displaying derived class variable var_derived "<<var_derived<<endl;
        }
};

int main(){
    BaseClass *Base_ptr;
    BaseClass obj_base;
    DerivedClass obj_derived;
    Base_ptr = &obj_derived;
    
    Base_ptr->var_base=32;
    Base_ptr->display();
    return 0;
}
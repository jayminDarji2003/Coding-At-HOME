
    //constructor in  inheritance.
    // Program :- Multiple inheritance
#include <iostream>
using namespace std;

class Base{
private:
    int data1;
public:
    Base(int i){
        data1 = i;
        cout << "Base1 class constructor called" << endl;
        printData();
    }
    void printData(void){
        cout << "The value of data1 is : " << data1 << endl;
    }
};

class Base2{
private:
    int data2;
public:
    Base2(int i2){
        data2 = i2;
        cout << "Base2 class constructor called" << endl;
        print_Data();
    }
    void print_Data(void){
        cout << "The value of data1 is : " << data2 << endl;
    }
};

class Derived : public Base, public Base2{
    int derived1, derived2;
public:
    Derived(int a, int b, int c, int d) : Base(a), Base2(b){
        derived1=c;
        derived2=d;
        cout<<"Derived class constructor called"<<endl;
        print__Data();
    }
     void print__Data(void){
        cout << "The value of data1 is : " << derived1 << endl;
        cout << "The value of data2 is : " << derived2 << endl;
    }
};

int main(){
    Derived d(1,2,3,4);
    // d.printData();
    // d.print_Data();
    // d.print__Data();
    return 0;
}

// This is the example of single inheritance

#include <iostream>
using namespace std;

class Base
{
private:
    int data1;
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base ::setData(void){
    data1 = 10;
    data2 = 20;
}
int Base ::getData1(void){
    return data1;
}
int Base ::getData2(void){
    return data2;
}


class Derived : public Base
{
    int data3;
public:
    void process();
    void display();
};

void Derived ::process(){
    data3=data2 * getData1();
} 
void Derived ::display(){
    cout<<"value of data 1 is : "<<getData1()<<endl;
    cout<<"value of data 2 is : "<<data2<<endl;
    cout<<"value of data 3 is : "<<data3<<endl;
} 

int main()
{
    Derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}


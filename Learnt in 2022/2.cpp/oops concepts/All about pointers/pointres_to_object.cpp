#include<iostream>
using namespace std;

class complex{
    int real,imaginary;
    public:
        void getData(){
            cout<<"The real part is = "<<real<<endl;
            cout<<"The imaginary part is = "<<imaginary<<endl;
        }
        void setData(int a,int b){
            real=a;
            imaginary=b;
        }
};

int main(){
    complex c;
    // c.setData(10,20);
    // c.getData();

        //we can create dynamic memory
    // complex *ptr=new complex;

        // Creating pointer of object
    complex *ptr = &c;
        // simple way
    // (*ptr).setData(1,2);
    // (*ptr).getData();
        // using arrow operator
    ptr->setData(10,20);
    ptr->getData();

    return 0;
}
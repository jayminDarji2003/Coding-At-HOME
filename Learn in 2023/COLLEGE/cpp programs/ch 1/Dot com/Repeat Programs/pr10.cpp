#include<iostream>
using namespace std;

class Demo{
    private:
        int a;
    public:
        void getData();
        void disData();
};
void Demo::getData(){
    cout<<"Enter the value of a : ";
    cin>>a;
}
void Demo::disData(){
    cout<<"The value of a is : "<<a<<endl;
}

int main(){
    Demo d;
    Demo *ptr;
    ptr=&d;
    ptr->getData();
    ptr->disData();
    return 0;
}
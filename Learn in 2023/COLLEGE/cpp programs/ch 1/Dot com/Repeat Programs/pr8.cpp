#include<iostream>
using namespace std;

class UseThisptr{
    private:
        int x;
    public:
        void getData(int);
        void disData(); 
};
void UseThisptr::getData(int x){
    this->x=x;
}
void UseThisptr::disData(){
    cout<<"The value of x is : "<<x<<endl;
}

int main(){
    UseThisptr t;
    t.getData(100);
    t.disData();
    return 0;
}
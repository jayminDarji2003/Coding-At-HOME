#include<iostream>
using namespace std;

class y;    //forword declaration

class x
{
private:
    int num;
public:
    void setData(int value){
        num=value;
    } 
    friend void add(x , y );
};

class y
{
private:
    int data;
public:
    void setData(int value){
        data=value;
    } 
    friend void add(x ,y );
};

void add(x o1,y o2){
    cout<<"Summing datas of x and y objects gives me = "<<o1.num + o2.data;
}


int main(){
    x a;
    y b;
    a.setData(4);
    b.setData(15);
    add(a , b);
    return 0;
}
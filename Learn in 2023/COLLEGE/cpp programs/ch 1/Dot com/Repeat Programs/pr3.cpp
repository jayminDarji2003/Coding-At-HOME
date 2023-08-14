#include<iostream>
using namespace std;

int & add(int &a,int &b){

    if (a>b)
    {
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int a=10,b=20;
    int max;
    cout<<a<<"\t\t"<<b<<endl;
    max=add(a,b);
    cout<<"The max value is : "<<max;

    return 0;
}
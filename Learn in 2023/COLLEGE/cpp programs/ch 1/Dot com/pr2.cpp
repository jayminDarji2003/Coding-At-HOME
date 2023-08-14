// write a program to demonstrate the use of defualt arguments in function overloading.

#include<iostream>
using namespace std;

int add(int a,int b=10){
    int ans=a+b;
    return ans;
}
int add(int a, int b, int c){
    int ans=a+b+c;
    return ans;
}

int main(){
    int a;
    cin>>a;
    int ans=add(a);
    cout<<"Ans is : "<<ans<<endl;

    int b=20,c=30;
    int anss=add(a,b,c);
    cout<<"Anss is : "<<anss;
    return 0;
}

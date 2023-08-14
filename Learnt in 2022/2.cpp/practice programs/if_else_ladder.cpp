#include<iostream>
using namespace std;
int main(){

    int age;

    cout<<"Enter your age: ";
    cin>>age;

    if(age<18){
        cout<<"You can't eligible for vote";
    }
    else if (age>=18)
    {
        cout<<"You are eligible for vote";
    }
    else{
        cout<<"You can vote";
    }
return 0;
}

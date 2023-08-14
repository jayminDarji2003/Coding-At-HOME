#include<iostream>
using namespace std;

int main(){
    int marks[4];

    for(int i=0;i<4;i++){
        cout<<"Enter the marks"<<endl;
        cin>>marks[i];
    }

    for(int i=0;i<4;i++){
        cout<<"The marks is: "<<marks[i]<<endl;
    }

    return 0;
}
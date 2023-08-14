// Write a program to calculate the area of circle, rectengle and square using function overloading...
#include<iostream>
using namespace std;

void area(int);
void area(int,int);
void area(float);

int main(){
    int l,w,s;
    float r;
    cout<<"Enter r : ";
    cin>>r;
    cout<<"Enter l : ";
    cin>>l;
    cout<<"Enter w : ";
    cin>>w;
    cout<<"Enter s : ";
    cin>>s;

    area(r);
    area(l,w);
    area(s);

    return 0;
}

void area(int s){
    int area;
    area=s*s;
    cout<<"The area of square is : "<<area<<endl;
}
void area(int l,int w){
    int area;
    area=l*w;
    cout<<"The area of rectengle is : "<<area<<endl;
}
void area(float r){
    float area,pi=3.14;
    area=pi * r * r;
    cout<<"The area of circle is : "<<area<<endl;
}
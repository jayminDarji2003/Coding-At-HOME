//Create a base class Shape.Use this class to store two double type value that could be used to compute the area of figures.Derived two specific classes called triangle and rectengle from the base shape.Add to the base class,a member function gatData() to initialize base class data members and another member function disArea() to compute and display the area of figures.Make disArea() as a virtual function and redefine this function in the derived class to suit their requirements.

#include<iostream>
using namespace std;

class Shape{
    protected:
        double height;
        double width;
    public:
        void setData(){
            cout<<"Enter the value of height : ";
            cin>>height;
            cout<<"Enter the value of width : ";
            cin>>width;
        }
        virtual void disData(){
            cout<<"\t\tFinding the area"<<endl;
        }
};
class Triangle: public Shape{
    public:
        void disData(){
            cout<<"The area of triangle is : "<<(width * height)/2<<endl;
        }
};
class Rectengle: public Shape{
    public:
        void disData(){
            cout<<"The area of rectangle is : "<<(width * height)<<endl;
        }
};

int main(){
    Shape *s,s1;
    Rectengle r;
    Triangle t;

    s=&s1;
    s->disData();

    s=&r;
    s->setData();
    s->disData();

    s=&t;
    s->setData();
    s->disData();
    return 0;
}
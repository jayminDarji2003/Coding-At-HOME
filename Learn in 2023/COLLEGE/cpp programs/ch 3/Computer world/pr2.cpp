// This is the 2nd program of the chapter 3 of computer world book
#include<iostream>
using namespace std;

class Shape{
    private:
        double l,w;
    public:
        virtual void displayArea(){
            cout<<"This function display the area of specified shap";
        }
        void getData(){
            cout<<"\n Enter value of l and w \n";
            cin>>l>>w;
        }
        int returnl(){
            return (l);
        }
        int returnw(){
            return (w);
        }
};


class Rectangle:public Shape{
    public:
        void displayArea(){
            cout<<"\n----------Area of Rectangle-----------";
            int area=returnl() * returnw();
            cout<<"\n Area is "<<area;
            cout<<"\n----------------------------";
        };
};

class Triangle:public Shape{
    public:
        void displayArea(){
            cout<<"\n----------- Area of Triangle ---------";
            int area=(returnl() * returnw())/2;
            cout<<"\nArea is : "<<area;
            cout<<"\n----------------------------------";
        }
};


int main(){
    Shape *p;
    Rectangle r;
    Triangle t;

    r.getData();
    p=&r;
    p->displayArea();

    t.getData();
    p=&t;
    p->displayArea();

    return 0;
}
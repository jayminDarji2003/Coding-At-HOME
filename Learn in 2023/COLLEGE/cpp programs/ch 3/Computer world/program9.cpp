// Create one class Rupees, which has one member data to store amount in rupee and create another class called Paise which has member data to store amount in paise. write program to convert one amount to another amount with use of type conversion.
#include<iostream>
using namespace std;

class paise;
class rupees{
    private:
        int rs;
    public:
        rupees(){}
        void gets(){
            cout<<"Enter rupees : ";
            cin>>rs;
        }
        rupees(paise &p);
        void dis(){
            cout<<"rupees is : "<<rs<<endl;
        }
};
class paise{
    private:
        int ps;
    public:
        paise(){}
        void disp(){
            cout<<ps;
        }
        void get(){
            cout<<"Enter paisa : ";
            cin>>ps;
        }
        int pai(){
            return ps;
        }
};
rupees ::rupees(paise &p){
    rs=(p.pai()/100);
}

int main(){
    rupees r;
    paise p;
    p.get();
    r=p;
    cout<<"----------Paise to rupees----------"<<endl;
    r.dis();
    return 0;
}
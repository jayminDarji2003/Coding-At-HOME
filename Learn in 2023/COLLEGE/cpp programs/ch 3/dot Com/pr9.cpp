//Create one class called Rupees , which has one member data tostore amount in rupee and create another class called Paise which has member data to store amount in paise . Write a program to convert one amount to another amount with use of type conversion .

#include<iostream>
using namespace std;

class Rupee{
    private:
        int rup;
    public:
        Rupee(){}
        void get(){
            cout<<"Enter rupee : ";
            cin>>rup;
        }
        void dis(){
            cout<<"Rupee is : "<<rup<<endl;
        }
        Rupee(Paisa &p);
};

class Paisa{
    private:
        int pai;
    public:
        Paisa(){}
        void get(){
            cout<<"Enter Paisa : ";
            cin>>pai;
        }
        void dis(){
            cout<<"Paisa is : "<<pai<<endl;
        }
        // Rupee(Paisa &p);
        int paii(){
            return pai;
        }
};

Rupee ::Rupee(Paisa &p){
    rup=(p.paii())/100;
}


int main(){
    Rupee r;
    Paisa p;

    p.get();
    r=p;
    cout<<"paisa to rupee"<<endl;
    r.dis();

    return 0;
}
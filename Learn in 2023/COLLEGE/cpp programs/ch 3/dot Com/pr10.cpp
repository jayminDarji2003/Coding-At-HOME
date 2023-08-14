//Create two classes Celsius and Fahrenheit to store temperature in terms of Celsius and Fahrenheit respectively . Include necessary functions to read and display the values . Define conversion mechanism to convert Celsius object to Fahrenheit object and vice versa . Show both types of conversions in main function .

#include<iostream>
using namespace std;

class cel;
class fhe{
    private:
        float f;
    public:
        fhe(){}
        fhe(cel &c);

        void get(){
            cout<<"Enter  Fahrenheit: ";
            cin>>f;
        }
        int fReturn(){
            return f;
        }
        void dis(){
            cout<<"Fahrenheit is : "<<f<<endl;
        }
};

class cel{
    private:
        float c;
    public:
        cel(){}
        cel(fhe &f);

        void get(){
            cout<<"Enter celsius : ";
            cin>>c;
        }
        int cReturn(){
            return c;
        }
        void dis(){
            cout<<"Celsius is : "<<c<<endl;
        }
};

cel::cel(fhe &f){
    c=((f.fReturn()-32)/1.8);
}

fhe::fhe(cel &c){
    f=((c.cReturn()*1.8)+32);
}


int main(){
    fhe f;
    cel c;

    cout<<"---Convert to celsius---"<<endl;
    f.get();
    c=f;
    c.dis();

    cout<<"---Convert to Fahrenheit---"<<endl;
    c.get();
    f=c;
    f.dis();

    return 0;
}
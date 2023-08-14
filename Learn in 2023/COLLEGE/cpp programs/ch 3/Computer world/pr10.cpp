//Create two classes Celsius and Fehrenhit to store temperature in terms of Celsius and Fehrentheit respectively.Include necessary fuction to read and display the values.Define conversion mechanism to convert Celsius object to Fehrenheit object and vice versa.Show both types of conversion in main function.

#include<iostream>
using namespace std;

class Celsius{
    private:
        float c;
    public:
        Celsius(){
            c=0;
        }
        Celsius(float val){
            c=val;
        }
        void setCel(){
            cout<<"Enter data in Celsius : ";
            cin>>c;
        }
        float retCel(){
            return (c);
        }
        void printCel(){
            cout<<"Celsius is : "<<c;
        }
};
class Fehrenheit{
    private:
        float f;
    public: 
        Fehrenheit(){
            f=0.0;
        }
        Fehrenheit(Celsius c11){
            f=((c11.retCel())*1.8)+32.0;
        }
        void setFeh(){
            cout<<"Enter data in Fehrentheit : ";
            cin>>f;
        }
        void printFeh(){
            cout<<"Fehrenheit is : "<<f;
        }
        operator Celsius(){
            float c;
            c=(f-32)/1.8;
        }

};

int main(){
    Celsius c1;
    Fehrenheit f1;

    c1.setCel();
    f1=c1;

    f1.printFeh();
    f1.setFeh();
    
    c1=f1;
    c1.printCel();
    return 0;
}
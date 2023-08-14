// Create a distance class with feet and inch as member data.
// And then overload ==,> and < operator.

#include<iostream>
using namespace std;

class Distance{
    private:
        int feet,inch;
    public:
        Distance(){
            feet=inch=0;
        }
        Distance(int f,int i){
            feet=f;
            inch=i;
        }
        void getDistance(){
            cout<<"Enter feet : ";
            cin>>feet;
            cout<<"Enter inch : ";
            cin>>inch;
        }
        void showDistance(){
            cout<<"Feet  : "<<feet<<" Inch : "<<inch<<endl;
        }

        int operator ==(Distance t){
            int totInch1=0;
            int totInch2=0;

            totInch1=feet * 12 + inch;
            totInch2=t.feet * 12 +t.inch;

            if (totInch1 == totInch2)
            {
                return 1;
            }
            else{
                return 0;
            }
        }

        int operator >(Distance t){
            int totInch1=0;
            int totInch2=0;

            totInch1=feet * 12 + inch;
            totInch2=t.feet * 12 +t.inch;

            if (totInch1 < totInch2)
            {
                return 1;
            }
            else{
                return 0;
            }
        }

        int operator <(Distance t){
            int totInch1=0;
            int totInch2=0;

            totInch1=feet * 12 + inch;
            totInch2=t.feet * 12 +t.inch;

            if (totInch1 < totInch2)
            {
                return 1;
            }
            else{
                return 0;
            }
        }
};

int main(){
    Distance d1(12,12),d2,d3,d4;

    d2.getDistance();
    if (d1==d2)
    {
        cout<<"Both objects are equal"<<endl;
    }
    else{
        cout<<"Both objects are not equal"<<endl;
    }
    
    d3.getDistance();
    d4.getDistance();

    if (d3 > d4)
    {
        cout<<"D3 is big"<<endl;
    }
    else{
        cout<<"D4 is big"<<endl;
    }
    return 0;
}
// Create a program which is addition the two array.
#include<iostream>
using namespace std;

class FirstArr{
    protected:
        int arr1[5];
    public:
        void setData(){
            cout<<"This is the first array."<<endl;
            for (int i = 0; i < 5; i++)
            {
                cout<<"Enter array value "<<i+1<<" = ";
                cin>>arr1[i];
            }
        }
        void printData(){
            for (int i = 0; i < 5; i++)
            {
                cout<<arr1[i]<<"\t";
            }
            cout<<endl;
        }
};

class SecondArr{
    protected:
        int arr2[5];
    public:
        void set_Data(){
            cout<<"This is the second array."<<endl;
            for (int i = 0; i < 5; i++)
            {
                cout<<"Enter array value "<<i+1<<" = ";
                cin>>arr2[i];
            }
        }
        void print_Data(){
            for (int i = 0; i < 5; i++)
            {
                cout<<arr2[i]<<"\t";
            }
             cout<<endl;
        }
};

class SumArray : public FirstArr ,public SecondArr{
    protected:
        int sum[5];
    public:
        void SumOfArray(){
                // We can use this method
            // sum[0]=arr1[0]+arr2[0];
            // sum[1]=arr1[1]+arr2[1];
            // sum[2]=arr1[2]+arr2[2];
            // sum[3]=arr1[3]+arr2[3];
            // sum[4]=arr1[4]+arr2[4];

                // Also we can use this method
            for (int i = 0; i < 5; i++)
            {
                sum[i]=arr1[i]+arr2[i];
            }
            
        }
        void printSum(){
            for (int i = 0; i < 5; i++)
            {
            cout<<sum[i]<<"\t";
            }
            
        }
};

int main(){

    SumArray s1;
    s1.setData();
    s1.set_Data();

    s1.printData();
    s1.print_Data();

    s1.SumOfArray();
    s1.printSum();
    return 0;
}
// Create a program which is addition the two array.
#include<iostream>
using namespace std;

class FirstArr{
    protected:
        int size;
    public:
        void setData(){
            cout<<"Enter how many integer you want to store : ";
            cin>>size;
            int arr1[size];

            // cout<<"This is the first array."<<endl;
            for (int i = 0; i < size; i++)
            {
                cout<<"Enter array value "<<i+1<<" = ";
                cin>>arr1[i];
            }
            for (int i = 0; i < size; i++)
            {
                cout<<arr1[i]<<"\t";
            }
        }
        void printData(){
            cout<<endl;
        }
};

int main(){

    FirstArr s1;
    s1.setData();
    // s1.set_Data();

    s1.printData();
    // s1.print_Data();

    // s1.SumOfArray();
    // s1.printSum();
    return 0;
}
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int num[11];
    ifstream in("get_1_to_10_numbers.txt");
    for (int i = 1; i <= 11; i++)
    {
        in>>num[i];
        cout<<"you have done "<<i<<endl;
    }
    for (int i = 1; i <= 11; i++)
    {
       cout<<num[i]<<endl;
    }

    return 0;
}
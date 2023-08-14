// All about pattern
#include<iostream>
using namespace std;

int main(){

    // Pattern:-
       /*         * * * *
                * * * *
                * * * *
                * * * *
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }*/

    // Pattern:-
                // 1   1   1
                // 2   2   2
                // 3   3   3
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<i<<"\t";
        }
        cout<<endl;
    }
    

    
    return 0;
}
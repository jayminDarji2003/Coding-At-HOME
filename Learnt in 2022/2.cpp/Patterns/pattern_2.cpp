// Pattern:-
            // Row take fron user
        // 1   2   3
        // 1   2   3
        // 1   2   3
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<j<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
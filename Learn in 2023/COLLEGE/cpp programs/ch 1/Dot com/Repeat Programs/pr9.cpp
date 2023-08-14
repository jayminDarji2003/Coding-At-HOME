#include<iostream>
using namespace std;

int main(){
    int count[5]={0};
    int vote,spoilt=0;
    char option='y';

    while (option == 'y')
    {
        cout<<"Enter vote for candidata [1 to 5] : ";
        cin>>vote;

        switch (vote)
        {
        case 1:
            count[0]++;
            break;
        case 2:
            count[1]++;
            break;
        case 3:
            count[2]++;
            break;
        case 4:
            count[3]++;
            break;
        case 5:
            count[4]++;
            break;
        
        default:
            spoilt++;
            break;
        }
        cout<<"Vote Again[y or n]..? : ";
        cin>>option;

    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"Candidate "<<i+1<<" get "<<count[i]<<endl;
    }
    cout<<"Spoilt vote are : "<<spoilt<<endl;
    return 0;
}
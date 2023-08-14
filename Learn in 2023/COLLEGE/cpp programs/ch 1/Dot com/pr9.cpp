#include<iostream>
using namespace std;

int main(){
    int count[5]={0},vote,spoilt=0;
    char option='y';

    while (option == 'y')
    {
        cout<<"Election:5 candidte \nVote for candidate no [1-5]"<<endl;
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
        cout<<"Vote Again? [y/n]";
        cin>>option;
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<endl<<"Candidate "<<i+1<<" : "<<count[i]<<" votes";
    }
    cout<<"\nSpoilt votes is : "<<spoilt;
    
    
    return 0;
}
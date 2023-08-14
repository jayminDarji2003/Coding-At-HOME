// Program:- Read and write to a file
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // For read operation used --> ifsream
    // For write operation used --> ofsream

    ofstream out("r_and_w_to_file.txt");
    string name;
    cout<<"Enter your name : ";
    cin>>name;

    out<<"My name is "+name;
    out.close();

    ifstream in("r_and_w_to_file.txt");
    string content;
    // in>>content;
    getline(in,content);
    cout<<"The content of this file is:"<<content;
    in.close();
    
    return 0;
}
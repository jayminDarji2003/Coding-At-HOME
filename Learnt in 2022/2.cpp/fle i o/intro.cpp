/*
The useful classes for working with files in cpp are:
1.fstreambase   --> for base classs
2.ifstream      --> for derived class
3.ofstream      --> for derived class

    In order to work with files in cpp,you will have to open it. Primarily , there are two ways to open a file:
        1.using the constructor
        2.using the member function open() of the class
*/
#include <iostream>
#include <fstream> // file sctream
using namespace std;

int main()
{
    string st = "jaymin darji";
    // // Opening files using constructor and writing it.
    // ofstream out("samplefile.txt"); // write operation
    // out << st;

    // Opening files using constructor and writing it.
    string st2;
    ifstream in("sample2.txt"); // read operation
    //in>>st2 ;   // this is for one word
    getline(in,st2);    // this is for one line
    cout<<st2;


    return 0;
}
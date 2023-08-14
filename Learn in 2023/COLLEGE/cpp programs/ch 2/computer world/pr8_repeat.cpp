// This is the repeat program of the 7
#include <iostream>
using namespace std;

class Book;
class Tape;

class Publisher
{
private:
    char name[10];

public:
    friend void getData(Publisher &, Book &, Tape &);
    friend void putData(Publisher &, Book &, Tape &);
};
class Book : private Publisher
{
private:
    int page_no;
    friend void getData(Publisher &, Book &, Tape &);
    friend void putData(Publisher &, Book &, Tape &);
};
class Tape : private Publisher
{
private:
    int time_for_playing;

public:
    friend void getData(Publisher &, Book &, Tape &);
    friend void putData(Publisher &, Book &, Tape &);
};

void getData(Publisher &p,Book &b,Tape &t){
    cout<<"Enter title : ";
    cin>>p.name;
    cout<<"Enter no of page : ";
    cin>>b.page_no;
    cout<<"Enter time for playing : ";
    cin>>t.time_for_playing;
}
void putData(Publisher &p,Book &b,Tape &t){
    cout<<"\nThe book title is : "<<p.name<<endl;
    cout<<"Number of page is : "<<b.page_no<<endl;
    cout<<"The time for playing is : "<<t.time_for_playing<<endl;
}


int main()
{
    Publisher p1;
    Book b1;
    Tape t1;

    getData(p1,b1,t1);
    putData(p1,b1,t1);
    return 0;
}
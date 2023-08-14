// Just for understand
/*
    class --> Publisher
        store --->name of the title.

             publisher class
            |               |
            v               v
        book class      tape class

            book class stores---> page no
            tape class contain--->time for playing
*/

#include <iostream>
using namespace std;

class Book; //  Forword declaration
class Tape; //  Forword declaration

class Publisher
{
private:
    string title;

public:
    friend void getData(Publisher &, Book &, Tape &);
    friend void printData(Publisher &, Book &, Tape &);
};

class Book : private Publisher
{
private:
    int page_no;

public:
    friend void getData(Publisher &, Book &, Tape &);
    friend void printData(Publisher &, Book &, Tape &);
};

class Tape : private Publisher
{
private:
    int Time_for_playing;

public:
    friend void getData(Publisher &, Book &, Tape &);
    friend void printData(Publisher &, Book &, Tape &);
};

void getData(Publisher &p, Book &b, Tape &t)
{

    cout << "Enter Book title : ";
    cin >> p.title;

    cout << "Enter page number : ";
    cin >> b.page_no;

    cout << "Enter time for playing : ";
    cin >> t.Time_for_playing;
}

void printData(Publisher &p, Book &b, Tape &t)
{
    cout <<endl<<"Book title is : " << p.title << endl;
    cout << "Page no is : " << b.page_no << endl;
    cout << "Time for playing is : " << t.Time_for_playing << endl;
}

int main()
{
    Publisher p1;
    Book b1;
    Tape t1;

    getData(p1, b1, t1);
    printData(p1, b1, t1);

    return 0;
}
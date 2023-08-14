// Vartual base class

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_no(int a)
    {
        roll_no = a;
    }
    void print_no()
    {
        cout << "Your roll no is = " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void print_marks()
    {
        cout << "******** Your result is here ***********" << endl
             << "maths : " << maths << endl
             << "physics : " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sco)
    {
        score = sco;
    }
    void print_score()
    {
        cout << "The score is : " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_no();
        print_marks();
        print_score();
        cout<<"Your total score is : "<<total<<endl;
    }
};

int main()
{
    Result r;
    r.set_no(101);
    r.set_marks(99.9,98.1);
    r.set_score(77);
    r.display();
    return 0;
}
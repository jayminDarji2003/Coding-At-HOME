// Program 6 repeat

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_rollno(int roll)
    {
        roll_no = roll;
    }
    void dis_rollNo(void)
    {
        cout << "The roll on is : " << roll_no << endl;
    }
};

class test : virtual public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void dis_marks()
    {
        cout << "Your maths marks is : " << maths << endl;
        cout << "Your physics marks is : " << physics << endl;
    }
};

class sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void dis_score()
    {
        cout << "Your score is : " << score << endl;
    }
};

class Result:public test,public sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        dis_rollNo();
        dis_marks();
        dis_score();
        cout<<"Your total marks is : "<<total<<endl;
    }
};

int main()
{
    Result r;
    r.set_rollno(101);
    r.set_marks(99.99,88.99);
    r.set_score(77.77);
    r.display();
    return 0;
}
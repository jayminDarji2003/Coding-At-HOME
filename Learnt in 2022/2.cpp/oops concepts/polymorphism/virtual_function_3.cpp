// Virtual function
#include <iostream>
#include <cstring>

using namespace std;

class CodeWithHarry
{
protected:
    string title;
    float rating;
public:
    CodeWithHarry(string s, float r)
    {  
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class cwhVideo : public CodeWithHarry
{
private:
    float videoLength;
public:
    cwhVideo(string s, float r, float vLen) : CodeWithHarry(s, r)
    {
        videoLength = vLen;
    }
    void display()
    {
        cout << "This is an amazing video with title = "<<title<< endl;
        cout << "Rating = " << rating << " (Out of 5 starts)"<<endl;
        cout << "Length of this Video is = " << videoLength << " minutes" << endl;
    }
};

class cwhText : public CodeWithHarry
{
private:
    int words;
public:
    cwhText(string s, float r, int w) : CodeWithHarry(s, r)
    {
        words = w;
    }
    void display()
    {
        cout<<endl;
        cout << "This is an amzing text tutorial with title = "<<title << endl;
        cout << "Rating = " << rating <<" (out of 5 starts)"<< endl;
        cout << "No of words in this text tutorial is = " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for cwh video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    cwhVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // for cwh text
    title = "Django tutorial txt";
    words = 456;
    rating = 3.89;
    cwhText djText(title, rating, words);
    // djText.display();

    CodeWithHarry *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
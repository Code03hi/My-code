#include <iostream>
#include <cstring>
using namespace std;

class CodeWithBhagwan
{
protected:
    string title;
    float rating;

public:
    CodeWithBhagwan()
    {
        
    }
    CodeWithBhagwan(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display(){} // do nothing function  ---> pure virtual function
};

class video : public CodeWithBhagwan
{
    float videolength;

public:
    video(string s, float r, float vl) : CodeWithBhagwan(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Rating : " << rating << " Out of 5 star " << endl;
        cout << "Length of video : " << videolength << endl;
    }
};

class text : public CodeWithBhagwan
{
    int word;

public:
    text()
    {

    }
    text(string s, float r, int w1) : CodeWithBhagwan(s, r)
    {
        word = w1;
    }
    /*void display()
    {
        cout << "This is an amazing text with title " << title << endl;
        cout << "Rating of this tutorial : " << rating << " Out of 5 star " << endl;
        cout << "No of Word : " << word << " Minutes " << endl;
    }*/
};

int main()
{
    string title;
    float rating, videolength;
    int word;

    // for video
    title = "Django tutorial ";
    videolength = 4.65;
    rating = 4.6;
    video v1(title, rating, videolength);
    // v1.display();
    //  for text
    title = "Django tutorial textual ";
    word = 4.65;
    rating = 4.68;
    text t1;
    t1=text(title, rating, word);
    // t1.display();

    CodeWithBhagwan * tuts[2];
    tuts[0] = &v1;
    tuts[1] = &t1;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}

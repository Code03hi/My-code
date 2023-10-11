#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;
    string name;

public:
    void set_name(string name)
    {
        this->name = name;
        cout << "Student Name : " << name << endl;
    }
    void set_roll_no(int i)
    {
        roll_no = i;
    }
    void print_roll_no(void)
    {
        cout << "Roll no : " << roll_no << endl;
    }
};

class Test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float p1)
    {
        maths = m1;
        physics = p1;
    }
    void print_marks(void)
    {
        cout << "Your result is here" << endl;
        cout << "Mathematics : " << maths << endl;
        cout << "Physics : " << physics << endl;
    }
};

class Sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT Score : " << score << endl;
    }
};

class result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_roll_no();
        print_marks();
        print_score();
        cout << "Your toatl score : " << total << endl;
    }
};

int main()
{
    result Bhagwan;
    Bhagwan.set_name("Bhagwan Jha");
    Bhagwan.set_roll_no(03);
    Bhagwan.set_marks(99.95, 95.85);
    Bhagwan.set_score(85);
    Bhagwan.display();
    return 0;
}
#include<iostream>
using namespace std;

class student
{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student :: set_roll_number(int r)
{
    roll_number=r;
}
void student :: get_roll_number()
{
    cout<<"The roll Nunber is "<< roll_number<<endl;
}

class exam : public student
{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks(void);
};

void exam :: set_marks(float m,float p)
{
    maths=m;
    physics=p;
}

void exam :: get_marks(void)
{
    cout<<"Maths Marks : "<< maths<<endl;
    cout<<"Physics Marks : "<< physics<<endl;
}

class result : public exam
{
    float percentage;
    public:
    void display(void)
    {
        percentage=(maths+physics)/2;
        cout<<"Your Percentage : "<< percentage;
    }
};

int main(){
    float P,M;
    int R;
    cout<<"Enter The Student Roll No ";
    cin>>R;
    cout<<"Enter the Mathemetics Marks ";
    cin>>M;
    cout<<"Enter The Physice Marks ";
    cin>>P;
    result r1;
    r1.set_roll_number(R);
    r1.get_roll_number();
    r1.set_marks(M,P);
    r1.get_marks();
    r1.display();
    return 0;
}
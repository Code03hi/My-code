#include<iostream>
#include<string>

using namespace std;

class Person
{
    string name;
    int age;
    public:
    Person()
    {
        name = "Noname" ;
        age = 0;
    }
    friend ostream & operator << (ostream & output,Person &p);
    friend istream & operator >> (istream & input,Person &p);
};

ostream & operator << (ostream & output,Person &p)
{
    output << "What the hack " << endl;
    output << "My name Is " << p.name << " Age : " << p.age;
    return output;
}

istream & operator >> (istream & input,Person &p)
{
    cout << "Enter The Name : " ;
    getline(input,p.name) ;
    cout << "Enter Your Age : " ;
    input >> p.age;
    return input;
}

int main()
{
    //cout << "Enter the name and age " << endl;
    Person bhagwan;
    cin >> bhagwan;
    cout << bhagwan;
    return 0;
}
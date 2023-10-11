#include <iostream>
#include <string>

using namespace std;

class Four_Sided_Objects
{
protected:
    int length;
    int width;
    int height;
    int area;

public:
    virtual void getData() = 0;
    virtual void CalArea() = 0;
    virtual void PrintArea() = 0;
};

class Square : public Four_Sided_Objects
{
public:
    Square()
    {
        length = 10;
    }
    ~Square() {}
    void getData()
    {
        cout << "Enter side of square in pixel : ";
        cin >> length;
    }
    void CalArea()
    {
        area = length * length;
    }
    void PrintArea()
    {
        cout << "Area of Square : " << area << endl;
    }
};

class Rectangle : public Four_Sided_Objects
{
public:
    Rectangle()
    {
        length = 5;
        width = 10;
    }
    ~Rectangle() {}
    void getData()
    {
        cout << "Enter length : ";
        cin >> length;
        cout << "Enter Breath : ";
        cin >> width;
    }
    void CalArea()
    {
        area = length * width;
    }
    void PrintArea()
    {
        cout << "Area of Ractangle : " << area << endl;
    }
};

class rhombus : public Four_Sided_Objects
{
public:
    rhombus()
    {
        length = 5;
        height = 40;
    }
    ~rhombus() {}
    void getData()
    {
        cout << "Enter Length : ";
        cin >> length;
        cout << "Enter Height : ";
        cin >> height;
    }
    void CalArea()
    {
        area = length * height;
    }
    void PrintArea()
    {
        cout << "Area of Rhombus : " << area << endl;
    }
};

int main()
{
    Four_Sided_Objects *ob1[3];
    Square s1;
    ob1[0] = &s1;
    Rectangle r1;
    ob1[1] = &r1;
    rhombus r2;
    ob1[3] = &r2;
    int ch, i, j, k;
    do
    {
        cout << "1. Area of Square " << endl;
        cout << "2. Area of Rectangle " << endl;
        cout << "3. Area of Rhombus " << endl;
        cout << "4. Exit " << endl;
        cout << "Enter your Choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            s1.getData();
            s1.CalArea();
            s1.PrintArea();
            break;
        case 2:
            r1.getData();
            r1.CalArea();
            r1.PrintArea();
            break;
        case 3:
            r2.getData();
            r2.CalArea();
            r2.PrintArea();
            break;
        case 4:
            cout << "You Are Come Out The Operation " << endl;
            exit(0);
            break;
        }
    } while (ch != 4);
    return 0;
}

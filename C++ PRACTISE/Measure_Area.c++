#include <iostream>
using namespace std;

class measure
{
public:
    void shape(int r);
    void shape(int l, int b);
    void shape(float t, int d, int e);
    void shape(long a);
    void shape(float c, long int g);
    void shape(double j);
    void shape(float h, double f);
};

void measure ::shape(int r)
{
    cout << "Area of Circle : " << r * r << endl;
}

void measure ::shape(int l, int b)
{
    cout << "Area of Rectangle : " << l * b << endl;
}

void measure ::shape(float t, int d, int e)
{
    cout << "Area of Triangle : " << t * d * e << endl;
}

void measure ::shape(long a)
{
    cout << "Area of Square : " << a * a;
}

void measure ::shape(float c, long int g)
{
    cout << "Volume of the cone : " << (1 / 3) * 3.14 * c * c * g << endl;
}

void measure ::shape(double j)
{
    cout << "Volume of the sphere : " << (1 / 3) * 3.14 * j * j * j;
}

void measure ::shape(float h, double f)
{
    cout << "Volume of the Cylinder : " << 3.14 * f * f * h << endl;
}

int main()
{
    int r, d, e, l, b;
    float t, c, h;
    long a;
    int ch;
    double j, f;
    long int g;
    measure obj;
    cout << "Calculation of Area And Volume " << endl;
    cout << "Press 1 for Area of Circle " << endl;
    cout << "Press 2 for Rectangle " << endl;
    cout << "Press 3 for Area of triangle " << endl;
    cout << "Press 4 for Area of Square " << endl;
    cout << "Press 5 for Volume of Cone " << endl;
    cout << "Press 6 For Volume of Sphere " << endl;
    cout << "Press 7 for Volumn of Cylinder " << endl;
    cout << "Enter Your Choice : ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        obj.shape(2);
        break;
    case 2:
        obj.shape(l,b);
        break;
    case 3:
        obj.shape(r);
        break;
    case 4:
        obj.shape(r);
        break;
    case 5:
        obj.shape(r);
        break;
    case 6:
        obj.shape(r);
        break;
    case 7:
        exit(1);
        break;
    }
}    
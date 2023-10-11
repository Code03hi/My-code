#include <iostream>
#include<cmath>
using namespace std;

/*
create 2 classes :
1. simplecalculator - Take input of 2 number using a utility function and perform +,-,*,/ and display the result using another function .
2 . sciencetificCalculator - Take input of 2 number using utility function and perform any four scientific operattio of your choice and display the result using another function .

create another class HybridCalculator and inherit it using these 2 classes :
Q1. What type of Inheritance are you using ?
Q2. Which mode of inheritance are you using ?
Q3. Create a object of HybridCalculator and display of simple and scientific calculator ?
Q4. How is code Reusability implemented ?
*/

class Simple_Calculator
{
private:
    int a, b;

public:
    void get_Input();
    void set_Input(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void add(void)
    {
        int sum=a+b;
        cout << "a + b : " << sum << endl;
    }
    int sub(void)
    {
        int minus=a-b;
        cout << "a - b : " << minus << endl;
    }
    int mul(void)
    {
        int multiplication = a*b;
        cout << "a * b : " <<  multiplication << endl;
    }
    int div(void)
    {
        float divide=a/b;
        cout << "a / b : " << divide <<  endl;
    }
};

void Simple_Calculator :: get_Input()
{
    int a,b;
    cout << "Enter the First Value : ";
    cin  >> a;
    cout << "Enter the Second Value : ";
    cin  >> b;
    set_Input(a,b);
}

class ScienceTific_Calculator
{
    int a,b;
    public:
    void get_Input()
    {
        cout << "Enter the value of a : " ;
        cin >> a;
        cout << "Enter the value of b : ";
        cin >> b;
    }
    void performOperation()
    {
        cout << "The Value of cos(a) : " << cos(a) <<  endl;
        cout << "The Value of sin(a) : " << sin(a) <<  endl;
        cout << "The Value of exp(a) : " << exp(a) <<  endl;
        cout << "The Value of tan(a) : " << tan(a) <<  endl;
    }
};

int main()
{
    int choice;
    Simple_Calculator o1;
    ScienceTific_Calculator o2;
    o2.get_Input();
    o2.performOperation();
    /*o1.get_Input();
    cout << "Press 1 For Addition " <<  endl ;
    cout << "Press 2 For Subtraction " <<  endl ;
    cout << "Press 3 For Multiplication  " <<  endl ;
    cout << "Press 4 For Division " <<  endl ;
    cout << "Enter Your Choice : " ;
    cin >> choice ;
    switch (choice)
    {
    case 1:
        cout << "Your Choice Addition " <<  endl;
        o1.add();
        break;
     case 2:
        cout << "Your Choice Subtraction " <<  endl;
        o1.sub();
        break;
         case 3:
        cout << "Your Choice Mutiplication " <<  endl;
        o1.mul();
        break;
         case 4:
        cout << "Your Choice Division " <<  endl;
        o1.div();
        break;
    default:
    cout << "Your Choice Wrong Operation " << endl;
        break;
    } */
    return 0;
}
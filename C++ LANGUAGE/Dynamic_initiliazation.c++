#include <iostream>
using namespace std;

class BankDeposite
{
    int principal;
    int year;
    float interest_rate;
    float return_Value;

public:
    BankDeposite()
    {
        cout << "Default constructer " << endl;
    }
    BankDeposite(int p, int y, float r);
    BankDeposite(int p, int y, int r);
    void show(void);
};
BankDeposite ::BankDeposite(int p, int y, float r)
{
    principal = p;
    year = y;
    interest_rate = r;
    return_Value = principal;
    for (int i = 0; i < y; i++)
    {
        return_Value = return_Value * (1 + r);
    }
}
BankDeposite ::BankDeposite(int p, int y, int r)
{
    principal = p;
    year = y;
    interest_rate = float(r) / 100;
    return_Value = principal;
    for (int i = 0; i < y; i++)
    {
        return_Value = return_Value * (1 + r);
    }
}
void BankDeposite ::show(void)
{
    cout << endl
         << "Principal amount was " << principal << endl;
}
int main()
{
    BankDeposite bd1, bd2, bd3, bd4;
    int p, y;
    float r;
    int R;
    cout << "Enter the value of p , y and r " << endl;
    cin >> p >> y >> r;
    bd1=BankDeposite(p, y, r);
    bd1.show();
    cout << "Enter the value of p , y and R " << endl;
    cin >> p >> y >> R;
    bd2=BankDeposite(p, y, R);
    bd2.show(); 
    return 0;
}
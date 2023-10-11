#include<iostream>
using namespace std;

void CalcArea(const double * const pAi, // const pointer to const data
const double * const pRadius, // i.e. nothing can be changed
double * const pArea // changed pointer value , not address
)
{
    if(pAi && pRadius && pArea)
    {
        *pArea = (*pAi) * (*pRadius) * (*pRadius);
    }
}
int main()
{
    const double Pi=3.1416;
    double Area = 0;
    cout << "Enter radius of circle : ";
    double Radius;
    cin >> Radius;
    CalcArea(&Pi,&Radius,&Area);
    cout << "Area is = " << Area << endl;
}
#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;

public:
    void SetData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "The Price ID : " << id << endl;
        cout << "Price Of This Item is : " << price << endl;
    }
};

int main()
{
    /*
    1 2 3
    ^
    |
    |
    ptr point the first object */
    int size = 3;
    /*
    general store
    vegetable store
    hardware
    */
    int p ; float q;
    shop *ptr = new shop[size];
    shop *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Item of " << i + 1 << " : " ; 
        cin >> p;
        cout << "Enter the price of item : ";
        cin >> q;
        // ptr->SetData(p,q);
        (*ptr).SetData(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Item Number : " << i+1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    delete[] ptr;
    delete ptrTemp;     
    return 0;
};

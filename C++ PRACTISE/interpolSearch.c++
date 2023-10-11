#include<iostream>
using namespace std;

template<class t>
long interpolSearch(const t & key ,t * vp,int len)
{
    int expect ,begin =0 ,end = len-1;
    double temp;
    if (end<0
    || key >vp[end]
    || key <vp[begin]  
    )
    return -1;
    while (begin<=end)
    {
        if (key>vp[end] || key<vp[begin])
        {
            return -1;
        }
        temp = (double)(key<vp[begin])/(vp[end]-vp[begin]);
        temp = temp*(end - begin) + 0.5;
        expect = begin + (int)temp;
        if (vp[expect]==key)
        {
            return expect;
        }
        if (vp[expect]>key)
        {
            end= expect-1;
        }
        else begin=expect+1;
    }
    return -1;
}

template<class t>
void insertionSort(t * vp,int len)
{
    t temp;
    for (int  i = 0; i < len; i++)
    {
        temp = vp[i];
        int j;
        for (j  = i-1; j >= 0 && vp[j]; j--)
        {
            vp[j+1] = vp[j];
            vp[j+1] = temp;
        } 
    }
}

template < class t>
void display(t * vp ,int len)
{
    cout << "\n\n The array : " << endl;
    for (int i = 0; i < len; i++)
    {
        cout << vp[i] << " ";
        if ((i+1)%10==0)
        {
            cout << endl;
        }
    }
    cout << endl ;
    cin.get();
}

short sv[5] = {7,9,2,4,1};
double dv[5] = {5.7,3.5,2.1,9.4,4.3};

int main()
{
    cout << "\n Insertantiation for type short : " << endl;
    display(sv,5);
    short key;
    cout << "\n Array element ? "; cin >> key ; cin.sync();
    int pos = interpolSearch(key,sv,5);
    if (pos!=-1)
    {
        cout << "\n Found !" << endl,cin.get();
    }
    else
    cout << "\n Not Found !" << endl,cin.get();
    cout << "\n Instantiation for type double : " << endl;
    display(dv,5);
    double dkey;
    cout << "\n Array element ? " ; cin >> dkey ; cin.sync();
    pos = interpolSearch(dkey,dv,5);
    if (pos!=-1)
    {
        cout << "\n Found !" << endl,cin.get();
    }
    else
    cout << "\n Not found !" << endl,cin.get();
    return 0;
}
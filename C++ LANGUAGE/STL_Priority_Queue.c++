#include<iostream>
#include<queue>
using namespace std;
int main()
{
    // max heap
    priority_queue < int > max;
    // min heap
    priority_queue < int ,vector<int>,greater<int> > min ;
    max.push(3);
    max.push(9);
    max.push(8);
    max.push(4);
    cout << "Size : " << max.size() << endl;
    int n =  max.size() ;
    cout << "Asending Order " <<  endl;
    for (int i=0;i<n;i++)
    {
        cout << max.top() << " ";
        max.pop();
    }
    cout << "Check Empty : " << max.empty() << endl;
    min.push(3);
    min.push(9);
    min.push(8);
    min.push(4);
    cout << endl ;
    cout << "Desending Order " <<  endl;
    for (int i=0;i<n;i++)
    {
        cout << min.top() << " ";
        min.pop();
    }
    cout << "Check Empty : " << min.empty() << endl;
    return 0;
}

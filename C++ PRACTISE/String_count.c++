#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    system("cls");
    int i,count=0;
    char ch[50],c;
    //cout << "Size of string : " <<  sizeof(string) << endl;
    cout << "Enter Any String To Occurrance : " ;
    cin >> ch;
    cout << "Enter Any Which You want to count : ";
    cin >> c;
    //cout << "Size of String : " << sizeof(Paragraph) << endl;
    for ( i = 0; ch[i]!='\0'; i++)
    {
        if (ch[i]==c)
        {
            count++;
        }  
    }
    if (count==0)
    {
        cout << "Given Character [" <<c<< "] not found " << endl;
    }
    else
    {
        cout << "No Of Occurrance of [ " <<c<< " ] is :: " << count << " Times " << endl;
    }
    return 0;
}
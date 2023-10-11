#include <iostream>
#include <cstring>
//#include <cstdio>
//#include <bits/c++config.h>

using namespace std;

int main()
{
    string input;
    int i = 0;
    cout << "Enter string : ";
    getline(cin, input,20);
    cout << " Your string " << endl;
    char a[20] = "Bhagwan";
    input.copy(a, strlen(a), 0);
    while (i<=strlen(a))
    {
        cout << toupper(a[i]) << endl;
        putchar(toupper(a[i]));
        i=i+2;
    }
    cout << a;
    /*puts("Enter string : ");
    gets(a);*/
    return 0;
}
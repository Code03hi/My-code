#include <iostream>
#include <thread>
using namespace std;

void threadfn()
{
    cout << " I am inside thread function " << endl;
}

int main()
{
    thread t1 (threadfn);
    t1.join();
    return 0;
}
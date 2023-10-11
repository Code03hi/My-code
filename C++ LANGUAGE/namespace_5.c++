// A C++ program to demonstrate use of class
// in a namespace
#include <iostream>
using namespace std;

namespace ns {
// Only declaring class here
class geek;
} // namespace ns

// Defining class outside
class ns::geek {
public:
	void display() { cout << "ns::geek::display()\n"; }
};

int main()
{
	// Creating Object of geek Class
	ns::geek obj;
	obj.display();
	return 0;
}

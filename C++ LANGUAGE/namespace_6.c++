// A C++ code to demonstrate that we can define
// methods outside namespace.
#include <iostream>
using namespace std;

// Creating a namespace
namespace ns {
void display();
class geek {
public:
	void display();
};
} // namespace ns

// Defining methods of namespace
void ns::geek::display()
{
	cout << "ns::geek::display()\n";
}
void ns::display() { cout << "ns::display()\n"; }

// Driver code
int main()
{
	ns::geek obj;
	ns::display();
	obj.display();
	return 0;
}

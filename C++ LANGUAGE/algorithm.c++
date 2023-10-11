// C++ program to demonstrate the use of std::max 
#include<iostream> 
#include<algorithm> 
using namespace std; 
  
// Defining the binary function 
bool comp(int a, int b) 
{ 
 return (a < b); 
} 
int main() 
{ 
 int a = 7; 
 int b = 28; 
   
 cout << std::max(a,b,comp) << "\n"; 
  
 // Returns the first one if both the numbers 
 // are same 
 cout << std::max(7,7,comp); 
  
return 0; 
} 
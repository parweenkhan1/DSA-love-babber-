// C++ program to demonstrate the
// above approach
#include <iostream>
using namespace std;

// Function foo() with variable
// const int
void foo(const int y)
{
	// y = 6; const value
	// can't be change
	cout << y;
}

// Function foo() with variable int
void foo1(int y)
{
	// Non-const value can be change
	y = 5;
	cout << '\n'
		<< y;
}

// Driver Code
int main()
{
	int x = 9;
	const int z = 10;

	foo(z);
	foo1(x);

	return 0;
}

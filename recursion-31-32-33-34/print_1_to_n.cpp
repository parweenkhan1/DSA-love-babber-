#include <iostream>
using namespace std;
void function_recursion(int n)
{
    if (n == 0)
    {
        return;
    }
    function_recursion(n - 1);
    cout << n << endl;
}
int main()
{
    int n, i;
    cin >> n;
    cout << "Print from 1 to n recursively" << endl;
    function_recursion(n);
    return 0;
}
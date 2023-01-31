#include <iostream>
using namespace std;
void function_recursion(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    function_recursion(n - 1);
}
int main()
{
    int n, i;
    cin >> n;
    cout << "Print 1 to n in recursive manner" << endl;
    function_recursion(n);
    return 0;
}
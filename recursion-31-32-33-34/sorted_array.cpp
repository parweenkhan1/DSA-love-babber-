#include <iostream>
using namespace std;
bool isSorted(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else{
        return isSorted(arr+1,n-1);
    }
}
int main()
{
    int arr[] = {
        1,2,3,4,5};
    int n = 5;
    bool ans = isSorted(arr, n);
    if (ans)
    {
        cout << "The array is sorted" << endl;
    }
    else
    {
        cout << "The array is unsorted" << endl;
    }
}
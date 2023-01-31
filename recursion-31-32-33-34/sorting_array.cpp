#include <iostream>
using namespace std;
void print_arr(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void sorting(int n, int arr[])
{
    if (n == 1)
    {
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }   
    }
    sorting(n - 1, arr);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    print_arr(n, arr);
    sorting(n, arr);
    cout << "After sorting the array is " << endl;
    print_arr(n, arr);
    return 0;
}

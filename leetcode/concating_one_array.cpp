#include <iostream>
using namespace std;

void concate(int arr[], int n)
{
    int j = 0;
    int i;
    int ans[n + n];
    int k = 0;
    while (j < 2)
    {   
        i = 0;
        while (i < n)
        {
            ans[k] = arr[i];
            cout<<ans[k]<<" ";
            i++;
            k++;
        }
        j++;
    }
}

int main()
{
    int arr[3] = {1, 2, 1};
    concate(arr,3);
}
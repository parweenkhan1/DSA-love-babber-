#include <iostream>
#include <vector>
using namespace std;
void find_sum(int arr[], int n, int brr[], int m)
{
    int i = n - 1;
    int j = m - 1, carry = 0;
    vector<int> res;
    while (i >= 0 && j >= 0)
    {
        int n1 = arr[i];
        int n2 = brr[j];
        int sum = n1 + n2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        res.push_back(sum);
        i--, j--;
    }
    while (i >= 0)
    {
        int sum = arr[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        res.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        int sum = brr[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        res.push_back(sum);
        j--;
    }
    if(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        res.push_back(sum);
    }
    for(int i=0,j=res.size()-1;i<j;i++,j--){
        swap(res[i],res[j]);
    }
    for(auto i:res){
        cout<<i<<" ";
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[2] = {4, 5};
    find_sum(arr, 5, brr, 2);
}
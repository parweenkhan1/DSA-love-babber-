#include <iostream>
#include <vector>
using namespace std;
void subset(vector<int> arr, vector<int> output, int index, vector<vector<int>> &ans)
{
    if (index >= arr.size())
    {
        ans.push_back(output);
        return;
    }
    // exclude;
    subset(arr, output, index + 1, ans);

    // include;
    int element = arr[index];
    output.push_back(element);
    subset(arr, output, index + 1, ans);
}
int main()
{
    vector<int> arr = {1, 2, 3};
    int index = 0;
    vector<int> output;
    vector<vector<int>> ans;
    subset(arr, output, index, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
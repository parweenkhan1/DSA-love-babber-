#include <iostream>
using namespace std;
void print_spiral(int arr[][4], int n, int m)
{

    int startrow = 0;
    int endrow = n - 1;
    int startcol = 0;
    int endcolumn = m - 1;

    int count = 0;
    int total_count = (n * m);

    while (count < total_count)
    {
        // print starting row
        for (int i = startcol; count < total_count && i <= endcolumn; i++)
        {
            cout << arr[startrow][i]<<" ";
            count++;
        }
        startrow++;

        // print last column
        for (int i = startrow; count < total_count && i <=endrow; i++)
        {
            cout << arr[i][endcolumn]<<" ";
            count++;
        }
        endcolumn--;
        // print last row

        for (int i = endcolumn;count < total_count &&  i >= startcol; i --)
        {
            cout << arr[endrow][i]<<" ";
            count++;
        }
        endrow--;
        // print first column

        for (int i = endrow; count < total_count &&  i >= startrow; i--)
        {
            cout << arr[i][startcol]<<" ";
            count++;
        }
        startcol++;
    }
}
int main()
{
    int arr[4][4];

    cout << "Enter the element" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    print_spiral(arr, 4, 4);
    return 0;
}
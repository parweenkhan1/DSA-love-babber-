#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the row "<<endl;
    cin>>n;
    cout<<" Enter the column "<<endl;
    cin>>m;
    int **arr = new int*[n];
    for(int i = 0;i<n;i++){
        arr[i] = new int[m];
    }
    cout<<"Enter elements "<<endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Print the 2-d array "<<endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //relesing memory
    for(int i = 0;i<n;i++){
        delete [] arr[i];
    }
    delete []arr;
    return 0;
}
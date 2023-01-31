#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array "<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the array element "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Printing array element "<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete []arr;
    return 0;
}
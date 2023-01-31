#include<iostream>
using namespace std;

void printSum(int arr[][3],int n,int m){
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
        cout<<"The sum of "<<i<<" row is"<<sum<<" "<<endl;
    }
}
int main(){
    int arr[3][3];

    cout<<"Enter the element"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    printSum(arr,3,3);
    return 0;
}
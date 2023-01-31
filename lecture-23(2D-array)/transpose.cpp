#include<iostream>
using namespace std;
void transpose(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
void Print(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][3];
    cout<<"Enter Element"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    transpose(arr,3,3);
    Print(arr,3,3);
    return 0;
}
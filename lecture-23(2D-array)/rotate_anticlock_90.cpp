#include<iostream>
using namespace std;
void anticlock_rotate(int arr[][3],int row,int col){
    //find rotate
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    //swap col
    for(int i=0;i<row;i++){
        for(int j = 0;j<col/2;j++){
            swap(arr[j][i],arr[col-j-1][i]);
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
    anticlock_rotate(arr,3,3);
    Print(arr,3,3);
    return 0;
}
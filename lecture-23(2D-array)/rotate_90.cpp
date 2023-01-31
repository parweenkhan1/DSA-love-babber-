//(clock wise)

#include<iostream>
using namespace std;
void rotate(int arr[][3],int row,int col){
    //find rotate
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    //swap col
    for(int i=0;i<row;i++){
        for(int j = 0;j<col/2;j++){
            swap(arr[i][j],arr[i][col-j-1]);
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
    rotate(arr,3,3);
    Print(arr,3,3);
    return 0;
}
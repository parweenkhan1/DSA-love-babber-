#include<iostream>
using namespace std;
void Print_wave(int arr[][3],int n,int m){
    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i = n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
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
    Print_wave(arr,3,3);
    return 0;
}
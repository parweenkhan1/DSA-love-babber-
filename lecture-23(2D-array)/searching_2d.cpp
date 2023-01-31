#include<iostream>
using namespace std;
int main(){
    int arr[3][4];

    cout<<"Enter the element"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    
    int target;
    cout<<"Enter the element to be searched"<<endl;
    cin>>target;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j] == target){
                cout<<"The element is found"<<endl;
            }
        }
    }
}
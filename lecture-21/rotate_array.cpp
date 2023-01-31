#include<iostream>
using namespace std;
void rotate(int arr[],int n,int k ){

    int res[n];
    for(int i = 0;i<=n-1;i++){
        res[(i+k)%n] = arr[i];
    }
    cout<<"After Rotate"<<endl;
    for(auto i:res){
        cout<<i<<" ";
    }
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int k;
    cout<<"Enter the number position you want to rotate"<<endl;
    cin>>k;
    cout<<"Before Rotate"<<endl;
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    rotate(arr,7,k);
    cout<<endl;
}
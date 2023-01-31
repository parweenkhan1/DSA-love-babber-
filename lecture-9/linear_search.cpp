#include<iostream>
using namespace std;
 int linearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(k==arr[i]){
            return true;
        }
    }
    return false;
 }
int main(){
    int n;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    bool ans = linearSearch(arr,n,k);
    if(ans){
        cout<<"The number is found";
    }
}
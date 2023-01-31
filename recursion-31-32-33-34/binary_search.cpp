#include<iostream>
using namespace std;
int binary_search(int *arr,int l,int e,int k){
    if(l>e)
        return 0;
    int mid = l+(e-l)/2;
    if(arr[mid] == k)
        return 1;
    if(arr[mid]<k){
        return binary_search(arr,mid+1,e,k);
    }
    else{
        return binary_search(arr,l,mid-1,k);
    }
}
int main(){
    int arr[]={1,2,4,6,8,9,11,17,19,20};
    int n = 10;
    int key = 5;
    int ans = binary_search(arr,0,n-1,key);
    if(ans){
        cout<<"The number found"<<endl;
    }
    else{
        cout<<"The number is not found"<<endl;
    }
}
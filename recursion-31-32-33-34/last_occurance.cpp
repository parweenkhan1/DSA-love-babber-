#include<iostream>
using namespace std;
int last_occurance(int arr[],int i,int j,int k,int n){
    if(i>j)
        return -1;
    int mid = i+(j-i)/2;
    if(arr[mid]==k && (k<arr[mid+1]) || mid == n){
        return mid;
    }
    else if(arr[mid]<k || arr[mid]==k){
        return last_occurance(arr,mid+1,j,k,n);
    }
    else{
        return last_occurance(arr,i,mid-1,k,n);
    }
}
int main(){
    int n,k;
    cout<<"Enter N and K"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched "<<endl;
    cin>>k;
    int j = n-1;
    int ans = last_occurance(arr,0,n-1,k,j);
    cout<<"The index of last occurance is "<<ans<<endl;
    return 0;
}

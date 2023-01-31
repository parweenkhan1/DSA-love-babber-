#include<iostream>
using namespace std;
int first_occurance(int arr[],int i,int j,int k){
    if(i>j)
        return -1;
    int mid = i+(j-i)/2;
    if(arr[mid]==k && (k>arr[mid-1]) || mid == 0){
        return mid;
    }
    else if(arr[mid]>k || arr[mid]==k){
        return first_occurance(arr,i,mid-1,k);
    }
    else{
        return first_occurance(arr,mid+1,j,k);
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
    int ans = first_occurance(arr,0,n-1,k);
    cout<<"The index of first occurance is "<<ans<<endl;
    return 0;
}

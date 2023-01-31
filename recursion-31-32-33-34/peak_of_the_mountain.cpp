#include<iostream>
using namespace std;
int mountain_peak(int arr[],int i,int j){
    if(i>j){
        return 0;
    }
    int mid = i+(j-i)/2;
    if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
        return mid;
    }
    else if(arr[mid]<arr[mid+1]){
        return mountain_peak(arr,mid+1,j);
    }
    else{
        //arr[mid]>arr[mid+1]
        return mountain_peak(arr,i,mid);
    }
}
int main(){
    int n,k;
    cout<<"Enter N"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = mountain_peak(arr,0,n-1);
    cout<<"Peak of the mountain is "<<ans<<endl;
    return 0;
}
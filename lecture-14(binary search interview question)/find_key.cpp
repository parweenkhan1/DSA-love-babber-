#include<iostream>
using namespace std;

//finding key element
int find_key(int arr[],int s,int n,int k){
    int mid = s+(n-s)/2;
    while(s<=n){
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid]>k){
            n = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(n-s)/2;
    }
    return -1;
}

//finding pivote element
int find_pivot(int arr[],int n){
    int s = 0;
    int mid = s+(n-s)/2;
    while(s<n){
        if(arr[mid]>arr[mid+1]){
            s = mid+1;
        }
        else{
            n = mid;
        }
        mid = s+(n-s)/2;
    }
    return n;
}


int main(){
    int arr[5] = {7,1,2,3};
    int ans = find_pivot(arr,3);
    int k,key;
    cout<<ans<<endl;
    cout<<"enter the key element"<<endl;
    cin>>k;
    if(arr[ans]<=k && k<=arr[3]){
        key = find_key(arr,ans,3,k); 
    }
    else{
        key = find_key(arr,0,ans-1,k); 
    }
    cout<<"The index of key element is "<<key<<endl;

    return 0;
}
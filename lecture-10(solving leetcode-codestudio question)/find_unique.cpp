#include<iostream>
using namespace std;

int find_unique(int arr[],int n){
    int ans =0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = find_unique(arr,n);
    cout<<"The unique number is "<<ans;
    return 0;
}
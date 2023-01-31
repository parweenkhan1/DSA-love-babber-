//find a pivot index such that the sum of the lementsstrictly
//left is equal to the sum of elements strictly to the right.
#include<iostream>
using namespace std;
int find_pivot_index(int arr[],int i,int n,int sum,int leftsum){
    if(i>n){
        return -1;
    }
    if(leftsum == (sum-leftsum-arr[i])){
        return i;
    }
    else{
        return find_pivot_index(arr,i+1,n,sum,leftsum+arr[i]);
    }
}
int main(){
    int n;
    cout<<"Enter N"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ans = find_pivot_index(arr,0,n,sum,0);
    cout<<"pivot index is "<<ans<<endl;
    return 0;
}
#include<iostream>
using namespace std;
 int sumArray(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
 }
int main(){
    int n;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = sumArray(arr,n);
    cout<< "sum of the array is "<<ans<<endl;
}
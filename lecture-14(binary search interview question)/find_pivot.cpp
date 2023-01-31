// [7,9,1,2,3]
//      ^
//      |
// pivot index = 2
#include<iostream>
using namespace std;

int find_pivot(int arr[],int n){
    int s = 0;
    int mid = s+(n-s)/2;
    while(s<n){
        if(arr[mid]>=arr[0]){
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
    int arr[10] = {0,1,3,4,5,9,10,12,13,-1};
    int ans = find_pivot(arr,9);
    cout<<"The pivot index is "<<ans<<endl;
    return 0;
}
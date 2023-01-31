#include<iostream>
using namespace std;

int find_duplicate(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    for(int i=1;i<n;i++){
        ans = ans^i;
    }
    return ans;
}



int main(){
    int arr[10] = {
        1,3,5,2,4,8,6,7,9,4
    };
    int ans = find_duplicate(arr,10);
    cout<<"duplicate number "<<ans;
    return 0;
}
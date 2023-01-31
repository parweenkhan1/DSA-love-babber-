#include<iostream>
using namespace std;

int last_occurance(int arr[],int n,int k){
    int i=0;
    int j=n-1;
    int ans = -1;
    while(i<=j){
        int mid = i+(j-i)/2;
        if(arr[mid] == k){
            ans = mid;
            i = mid+1;
        }
        else if(arr[mid]>k){
            j = mid-1;
        }
        else{
            i = mid+1;
        }
    }
    return ans;
}


int main(){
    int arr[13] = {2,4,9,9,9,9,11,15,18,18,20,22,24};

    cout<<"The last occurance of number 9 is at "<<last_occurance(arr,13,9)<<endl;
    return 0;
}
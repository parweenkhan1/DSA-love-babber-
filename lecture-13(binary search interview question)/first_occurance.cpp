#include<iostream>
using namespace std;

int first_occurance(int arr[],int n,int k){
    int i=0;
    int j=n-1;
    int ans = -1;
    while(i<=j){
        int mid = i+(j-i)/2;
        if(arr[mid] == k){
            ans = mid;
            j = mid-1;
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
    int arr[10] = {2,4,9,9,9,9,9,9,9,18};

    cout<<"The first occurance of number 9 is at "<<first_occurance(arr,10,9)<<endl;
    return 0;
}
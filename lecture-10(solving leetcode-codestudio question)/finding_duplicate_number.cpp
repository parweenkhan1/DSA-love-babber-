//----------finding all duplicate number

// Given an integer array nums of length n where all the integers 
// of nums are in the range[1, n] and each integer appears once or
//  twice, return an array of all the integers that appears twice.
// You must write an algorithm that runs inO(n)
// time and uses only constant extra space.

#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void find_duplicate(int arr[]){
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int ans[10];
    int i = 0;
    int j=0;
    while(i<n){
            if(arr[i] == arr[i+1]){
                cout<<"the duplicate number is"<<arr[i]<<endl;
                ans[j] = arr[i];
                j++;
                i+=2;
            }
            else{
                i++;
            }
        }
}



int main(){
    int arr[10];
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }
   find_duplicate(arr);
}
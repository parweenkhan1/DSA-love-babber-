#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    for(int i = 1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(key<arr[j] && j>=0){
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    } 
}

int main(){
    int arr[5] = {9,5,1,4,3};
    insertion_sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
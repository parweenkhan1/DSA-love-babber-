#include<iostream>
using namespace std;

void reverse_array(int arr[],int n){
    int i = 0;
    int j = n-1;
    while(i!=j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {9,2,4,-1,3};
    reverse_array(arr,5);
    print(arr,5);
}
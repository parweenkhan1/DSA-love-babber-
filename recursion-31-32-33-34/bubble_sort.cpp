#include<iostream>
using namespace std;
void bubble_sort(int *arr,int n){
    if(n==0||n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble_sort(arr,n-1);
}
int main(){
    int arr[] = {9,6,4,3,25,6};
    bubble_sort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}
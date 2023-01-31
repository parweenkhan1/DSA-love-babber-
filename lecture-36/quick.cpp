#include<iostream>
using namespace std;
int partition(int *arr,int s,int e){
    //pivot element
    int pivot = arr[e];

    //pointer for larger number index
    int i = s-1;
    for(int j = s;j<e;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[e]);
    return i+1;
}
void quick_sort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int pivot = partition(arr,s,e);
    quick_sort(arr,s,pivot-1);
    quick_sort(arr,pivot+1,e);
}
int main(){
    int arr[10] = {10,80,90,100,23,45,109,39,30,70};
    int n = 10;
    quick_sort(arr,0,n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
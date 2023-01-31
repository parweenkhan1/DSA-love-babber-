#include<iostream>
using namespace std;
void merg(int *arr,int s,int mid,int e){
    int index = mid - s + 1;
    int INDEX = e - mid;

    int *first = new int[index];
    int *second = new int[INDEX];

    for(int i = 0;i<index;i++){
        first[i] = arr[s+i];
    }
    for(int i = 0;i<INDEX;i++){
        second[i] = arr[mid+i+1];
    }

    int i =0;
    int j=0;
    int k = s;
    while(i<index and j<INDEX){
        if(first[i]<second[j]){
            arr[k++] = first[i++];
        }
        else{
            arr[k++] = second[j++];
        }
    }
    while(i<index){
        arr[k++] = first[i++];
    }
    while(j<INDEX){
        arr[k++] = second[j++];
    }
}
void merg_sort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;
    merg_sort(arr,s,mid);
    merg_sort(arr,mid+1,e);
    merg(arr,s,mid,e);
}
int main(){
    int arr[] = {21,34,22,11,4,3,2,1,8,94,33,12};
    merg_sort(arr,0,11);

    for(int i=0;i<12;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
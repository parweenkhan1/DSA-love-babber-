#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        int swapped = 0;
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = 1;
            }
        }
        if(swapped == 0){
            cout<<"The array is already sorted"<<endl;
            break;
        }
    }


}


int main(){
    int arr[5]={11,2,4,51,43};
    cout<<"Before "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble_sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
} 
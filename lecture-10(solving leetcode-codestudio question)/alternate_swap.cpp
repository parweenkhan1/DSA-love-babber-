#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}


int main(){
    int even[10] = {1,2,3,4,5,6,7,8,9,10};
    int odd[9] = {1,2,3,4,5,6,7,8,9};
    swapAlternate(odd,9);
    print(odd,9);
    return 0;
}
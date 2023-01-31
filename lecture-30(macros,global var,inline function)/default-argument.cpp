#include<iostream>
using namespace std;
void print_array(int arr[],int n,int start=2){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = 8;
    print_array(arr,size);
    return 0;
}
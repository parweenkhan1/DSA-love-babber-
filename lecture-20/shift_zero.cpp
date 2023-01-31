#include<iostream>
#include<array>
using namespace std;
void shift_zero(int arr[],int m){
    int i=0;
    for(int j = 0;j<m;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
int main(){
    int arr[5] = {0,3,0,6,12};
    shift_zero(arr,5);
    for(auto i:arr){
        cout<<i<<" ";
    }
}
//find the rotated array is orginally sorted
#include<iostream>
using namespace std;
bool find_sorted(int arr[],int n){
    int count = 0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }
    if(count<=1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int arr[7] = {4,5,1,6};
    bool res = find_sorted(arr,4);
    if(res){
        cout<<"The array is originaly sorted"<<endl;
    }
    else{
        cout<<"The array is not sorted "<<endl;
    }
}
#include<iostream>
using namespace std;
bool find_element(int *arr,int n,int k){
    if(n==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        return find_element(arr+1,n-1,k);
    }
}
int main(){
    int arr[] = {5,2,6,8,9,3,4,1};
    int n = 7;
    int key = 80;
    bool ans = find_element(arr,n,key);
    if(ans){
        cout<<"The element is found"<<endl;
    }
    else{
        cout<<"The element not found"<<endl;
    }
}
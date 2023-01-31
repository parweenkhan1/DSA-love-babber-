#include<iostream>
using namespace std;
int get_sum(int arr[],int n){
    if(n==0)
        return 0;
    if(n==1)
        return arr[0];
    else{
        int remain = get_sum(arr+1,n-1);
        int sum = arr[0]+remain;
        return sum;
    }
}
int main(){
    int arr[] = {10,2,3,4,5};
    int n = 5;
    int sum = get_sum(arr,n);
    cout<<sum;
}
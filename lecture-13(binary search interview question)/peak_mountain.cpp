#include<iostream>
using namespace std;
int mountain_peak(int arr[],int s,int e){
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return e;
}
int main(){
    int arr[7] = {1,2,3,4,3,2,1};

    int peak = mountain_peak(arr,0,6);

    cout<<"the peak of the mountain is "<<peak;
    return 0;
}
#include<iostream>
using namespace std;

int find_number(int arr[],int n,int k){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid]>k){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int main(){
    int even[8]={1,4,6,9,12,16,19,22};
    int odd[9] = {2,6,9,14,18,22,28,30,40};

    int evenIndex = find_number(even,8,30);
    int odd_index = find_number(odd,9,1);

    cout<<"The index of 30 is "<<evenIndex<<endl;
    cout<<"The index of 1 is "<<odd_index<<endl;
    return 0;
}
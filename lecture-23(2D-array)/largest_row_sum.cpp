#include<iostream>
using namespace std;

int printLargestSum(int arr[][3],int n,int m){
    int max = -1;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
        if(max<sum){
            max = sum;
        }
    }
    return max;
}
int main(){
    int arr[3][3];

    cout<<"Enter the element"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    int largest_sum = printLargestSum(arr,3,3);
    cout<<"The largest sum is "<<largest_sum<<endl;
    return 0;
}
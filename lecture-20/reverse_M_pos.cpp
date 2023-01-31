#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&arr,int m){
    int s = m+1;
    int e = arr.size()-1;
    while(s<=e){
        int temp = arr[e];
        arr[e] = arr[s];
        arr[s] = temp;
        s++;
        e--;
    }
}
int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);

    int M;
    cout<<"Enter the position"<<endl;
    cin>>M;
    reverse(arr,M);
    for(auto i:arr){
        cout<<i<<" ";
    }
}
#include<iostream>
using namespace std;
#include<vector>
void merge_sorted(vector<int>&A,int m,vector<int>&B,int n){
    int i = 0,j = 0,k = 0;
    vector<int>C(m+n,0);
    while(i<m && j<n){
        if(A[i]<B[j]){
            C[k] = A[i];
            k++;
            i++;
        }
        else{
            C[k] = B[j];
            k++;
            j++;
        }
    }
    while(j<n){
        C[k] = B[j];
            k++;
            j++;
    }
    while(i<m){
        C[k] = A[i];
            k++;
            i++;
    }
    for(auto i:C){
        cout<<i<<" ";
    }
}
int main(){
   vector<int> A;
   vector<int> B;
   vector<int>C;
   A.push_back(1);
   A.push_back(2);
   A.push_back(3);
   B.push_back(2);
   B.push_back(5);
   B.push_back(6);
    int m = A.size();
    int n = B.size();
    merge_sorted(A,m,B,n);
}
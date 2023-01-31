#include<iostream>
using namespace std;
int find_pivot(int arr[],int n){
    int leftsum = 0,sum=0;
    for(int i=0;i<=n;i++){
        sum+=arr[i];
    }
    for(int i=0;i<=n;i++){
        int rightsum = sum-leftsum-arr[i];
        if(leftsum == rightsum){
            return i;
        }
        leftsum+=arr[i];
    }
    return -1;
}

int main(){
    int arr[6] = {4,-1,1};
    int pivot = find_pivot(arr,2);
    cout<<"The pivot index is "<<pivot<<endl;
    return 0;
}

































//int sum(int arr[],int s,int e){
//     int s1 = 0;
//     while(s<=e){
//         s1+=arr[s];
//         s++;
//         e--;
//     }
//     return s1;
// }


// int find_pivot(int arr[],int s,int e){
//     int mid = s+(e-s)/2;
//     while(mid>s && mid<e){
//         int s1 = sum(arr,s,mid-1);
//         int s2 = sum(arr,mid+1,e);
//         if(s1 == s2){
//             return mid;
//         }
//         else if(s1>s2){
//             mid = mid-1;
//         }
//         else{
//             mid = mid+1;
//         }
//     }
// }
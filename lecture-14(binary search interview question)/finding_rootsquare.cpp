#include<iostream>
using namespace std;
//integer part
int finding_squareroot(int n){
    int s = 0;
    int e = n;
    int ans;
    int mid = s+(n-s)/2;
    while(s<e){
        int square = mid*mid;
        if(square == n){
            return mid;
        }
        if(square > n){
            e = mid-1;
            
        }
        else{
            s = mid+1;
            ans = mid;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
double fraction(int n,int precision,int temp){
    double factor = 1;
    double ans = temp;
    for(int i=0;i<precision;i++){
        factor = factor/10;
        for(double j = ans;j*j<n;j = j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int root = finding_squareroot(n);
    cout<<"The root is "<<root<<endl;
    cout<<" the root is "<<fraction(n,3,root)<<endl;
}
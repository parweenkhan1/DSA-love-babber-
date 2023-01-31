#include<iostream>
using namespace std;
int nStair(int n){
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    else{
        return nStair(n-1)+nStair(n-2);
    }
}
int main(){
    int n,ans;
    cin>>n;
    ans=nStair(n);
    cout<<ans;
}
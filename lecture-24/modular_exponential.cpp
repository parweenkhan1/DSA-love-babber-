//find x^n%m
#include<iostream>
using namespace std;
int find_modular(int x,int n,int m){
    int res = 1;
    while(n>0){
        if(n&1){
            //odd
            res = (1ll*res*(x%m))%m;
        }
        x = (1ll*(x%m)*(x%m))%m;
        n = n>>1;//divided by 2
    }
    return res;
}
int main(){
    int x,n,m;
    cin>>x>>n>>m;
    int mod = find_modular(x,n,m);
    cout<<"Modular Exponential "<<mod<<endl;
    return 0;
}
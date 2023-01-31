#include<iostream>
using namespace std;
int powertwo(int i,int j){
    if(j==0){
        return 1;
    }
    if(j == 1){
        return i;
    }
    int ans = powertwo(i,j/2);
    if(j%2 == 0){
        return ans*ans;
    }
    else{
        return i*ans*ans;
    }
}
int main(){
    int i,j,n;
    cin>>i>>j;
    n=powertwo(i,j);
    cout<<n;
}
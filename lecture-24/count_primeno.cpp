#include<iostream>
using namespace std;
bool isprime(int i){
    for(int j=2;j<i;j++){
        if(i%j==0)
        return false;
    }
    return true;
}
int Prime(int n){
    int cnt = 0;
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    int count = Prime(n);
    cout<<"Total no of prime no is "<<count<<endl;
}
#include<iostream>
#include<vector>
using namespace std;
int sieve_eratosthenes(int n){
    vector<bool>prime(n+1,true);
    prime[0]=prime[1]=false;
    int cnt = 0;
    for(int i=2;i<n;i++){
        if(prime[i]){
            cnt++;
            for(int j = i*2;j<n;j=j+i){
                prime[j] = false;
            }
        }
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    int count = sieve_eratosthenes(n);
    cout<<"Total no of prime no is "<<count<<endl;
}
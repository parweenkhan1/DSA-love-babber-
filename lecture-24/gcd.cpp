#include<iostream>
using namespace std;
int find_gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    int gcd = find_gcd(a,b);
    cout<<"The gcd is "<<gcd<<endl;
}
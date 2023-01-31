#include<iostream>
using namespace std;
int add(int n1,int n2 ,int n3=0,int n4=0){
    return n1+n2+n3+n4;
}
int main(){
    cout<<add(1,2)<<endl;
    cout<<add(1,2,3)<<endl;
    cout<<add(1,2,3,4)<<endl;
}
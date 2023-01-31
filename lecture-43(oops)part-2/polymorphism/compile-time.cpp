//function overloading with different number of argument
#include<iostream>
using namespace std;
int add(int n1,int n2){
    return n1*n2;
}
int add(int n1,int n2,int n3){
    return n1+n2+n3;
}

int main(){
    cout<<add(10,20)<<endl;
    cout<<add(10,20,60)<<endl;
}
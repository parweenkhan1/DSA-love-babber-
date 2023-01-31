#include<iostream>
using namespace std;
int main(){
    int num=5;
    int *p = &num;
    cout<<"num "<<num<<endl;
    cout<<"address of num "<<&num<<endl;
    cout<<"*p "<<*p<<endl;
}
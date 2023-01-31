#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *p = &a;
    int **q = &p;
    cout<<"address a"<<&a<<endl;
    cout<<"address a"<<p<<endl;
    cout<<"address a"<<*q<<endl;

    cout<<"Address of p "<<&p<<endl;
    cout<<"Address of p "<<q<<endl;

    cout<<"Value of a "<<a<<endl;
    cout<<"Value of a "<<*p<<endl;
    cout<<"Value of a "<<**q<<endl;
}
#include<iostream>
using namespace std;
int main(){
    int *var = new int ;
    cout<<"address of value "<<var<<endl;
    cout<<"address of var pointer "<<(&var)<<endl;
    delete var;
    return 0;
}
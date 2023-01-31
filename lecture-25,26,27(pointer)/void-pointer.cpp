#include<iostream>
using namespace std;
int main(){
    void *ptr;
    int i = 10;
    ptr = &i;
    cout<<" adsress of i "<<&i<<endl;
    cout<<" The address is where the void pointer is pointing "<<ptr<<endl;
    return 0;
}
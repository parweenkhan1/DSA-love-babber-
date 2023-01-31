#include<iostream>
using namespace std;
int main(){
    int i = 5;
    //creating reference variable
    int& j = i;

    cout<<i<<endl;
    ++i;
    cout<<i<<endl;
    
    ++j;
    cout<<i<<endl;
}
#include<iostream>
using namespace std;
inline int getMax(int a,int b){
    return ((a>b)?a:b);
}
int main(){
    int a,b;
    a = 10;
    b = 22;
    int max = getMax(a,b);
    cout<<max<<endl;
    a = 22;
    b = 12;
    max = getMax(a,b);
    cout<<max<<endl;
    return 0;
}
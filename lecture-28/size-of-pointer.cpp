#include<iostream>
using namespace std;
int main(){
    char ch = 'a';
    cout<<sizeof(ch)<<endl;

    char *p = &ch;
    cout<<sizeof(p)<<endl;

    return 0;
}
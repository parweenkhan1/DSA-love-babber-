#include<iostream>
using namespace std;
#define min(a,b) (((a)>(b))?(b):(a))
int main(){
    int a = 23,b = 67;
    int mini = min(a,b);
    cout<<mini<<endl;
    return 0;
}
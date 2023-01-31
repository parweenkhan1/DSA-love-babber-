#include<iostream>
using namespace std;
void update1(int i){
    i++;
}
void update2(int& i){
    i++;
}
int main(){
    int i=5,j=5;
    cout<<"Before i "<<i<<endl;
    update1(i);
    cout<<" After i "<<i<<endl;


    cout<<"Before j "<<j<<endl;
    update2(j);
    cout<<" After j "<<j<<endl;
    return 0;
}
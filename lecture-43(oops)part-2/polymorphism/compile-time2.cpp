//function over loading with different type of argument
#include<iostream>
using namespace std;
int add(int n1,int n2){
    return n1*n2;
}
double add(double n1,double n2,double n3){
    return n1+n2+n3;
}

int main(){
    cout<<add(10,20)<<endl;
    cout<<add(10.40,20.00,60.80)<<endl;
}
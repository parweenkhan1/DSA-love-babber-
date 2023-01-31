#include<iostream>
using namespace std;
class default_constructer{

    public:
    int a ;
    int b ; 
    default_constructer(){
        a = 10;
        b = 10;
    }
};


int main(){
    default_constructer c;
    cout<<" a: "<<c.a<<endl;
    cout<<" b: "<<c.b<<endl;
    return 0;
}
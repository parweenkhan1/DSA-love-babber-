#include<iostream>
using namespace std;
class parameter_constructer{

    public:
    int a ;
    int b ; 
    parameter_constructer(int a,int b){
        this->a = a;
        this->b = b;
    }
};


int main(){
    parameter_constructer c(10,20);
    cout<<" a: "<<c.a<<endl;
    cout<<" b: "<<c.b<<endl;
    return 0;
}
#include<iostream>
using namespace std;
class copy_constructer{

    public:
    int a ;
    int b ; 
    copy_constructer(int a,int b){
        this->a = a;
        this->b = b;
    }
    copy_constructer(const copy_constructer& d){
        a = d.a;
        b = d.b;
    }

};


int main(){
    copy_constructer c(10,20);
    
    copy_constructer d = c;

    cout<<" a: "<<c.a<<endl;
    cout<<" b: "<<c.b<<endl;

    cout<<" a: "<<d.a<<endl;
    cout<<" b: "<<d.b<<endl;
    return 0;
}
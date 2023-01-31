#include<iostream>
using namespace std;
class A{
    public:
    void abc(){
        cout<<"class A"<<endl;
    }
};
class B{
    public:
    void abc(){
        cout<<"class B"<<endl;
    }
};
class C:public A,public B{
    public:
};

int main(){
    C obj;
    //obj.abc();(ambiguos)
    

    //avoiding ambiguity using scope resolution operator
    obj.A :: abc();
}
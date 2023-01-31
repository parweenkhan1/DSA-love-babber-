#include<iostream>
using namespace std;
class dog{
    public:
    void bark(){
        cout<<"Bark"<<endl;
    }
};
class husky:public dog{
    public:
    void bark(){
        cout<<"Wooooo...."<<endl;
    }
};
class pitbull:public dog{
    public:
    void bark(){
        cout<<"Bhoo bhoo...."<<endl;
    }
};
int main(){
    husky d1;
    pitbull d2;
    d1.bark();
    d2.bark();
}
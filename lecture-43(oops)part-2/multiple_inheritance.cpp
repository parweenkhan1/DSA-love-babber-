#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
};
class Dog{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class Husky:public Dog,public Animal{
    public:
    void boo(){
        cout<<"bhoo..bhoo.."<<endl;
    }
};
int main(){
    Husky obj;

    obj.eat();
    obj.bark();
    obj.boo();
}
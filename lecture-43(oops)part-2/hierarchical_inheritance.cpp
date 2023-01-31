#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
};
class Dog:public Animal{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class Husky:public Animal{
    public:
    void boo(){
        cout<<"bhoo..bhoo.."<<endl;
    }
};
int main(){
    Husky obj;

    obj.eat();
    //obj.bark();
    obj.boo();
}
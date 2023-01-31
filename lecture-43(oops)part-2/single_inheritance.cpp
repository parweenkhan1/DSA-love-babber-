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
int main(){
    Dog obj;

    obj.eat();
    obj.bark();
}
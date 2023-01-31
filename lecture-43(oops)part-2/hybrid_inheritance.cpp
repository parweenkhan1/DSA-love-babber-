#include<iostream>
using namespace std;
class Animal{
    public:
    Animal(){
        cout<<"eating"<<endl;
    }
};
class Human{
    public:
    Human(){
        cout<<"thinking"<<endl;
    }
};
class Dog:public Animal{

};
class Bramharakhyash:public Dog,public Human{
 
};
int main(){
    Bramharakhyash obj;
    //it will evoke the constructor of the base class

}
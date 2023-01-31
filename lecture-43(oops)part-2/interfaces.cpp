#include<iostream>
using namespace std;
class animal{
    public:
    //pure virtual function
    virtual void sound() = 0;
    void sleeping(){
        cout<<"sleeping"<<endl;
    }
};
class dog:public animal{
    public:void sound(){
        cout<<"woof"<<endl;
    }
};
int main(){
    dog obj;
    obj.sound();
    obj.sleeping();
}
#include<iostream>
using namespace std;
class CAR{
    private:
    int milage;
    public:
    int get_milage(){
        return milage;
    }
    void set_milage(int milage){
        this->milage = milage;
    }
};
int main(){
    //static
    CAR Hero;
    Hero.set_milage(200);
    cout<<" milage is "<<Hero.get_milage()<<endl;


    //dynamic
    CAR* maruti = new CAR;
    maruti->set_milage(300);
    cout<<" milage is "<<(*maruti).get_milage()<<endl;
}
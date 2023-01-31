#include<iostream>
using namespace std;

class Item{
    private:
    int price;

    public:
    // Item(int p){
    //     price = p;
    // }

    int get_price(){
        return price;
    }
    void set_price(int p){
        price = p;
    }

};


 
int main(){
    Item bag;
    bag.set_price(20);
    cout<<"$"<<bag.get_price();
}
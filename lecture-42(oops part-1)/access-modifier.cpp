#include<iostream>
using namespace std;

class Human{
    private:
    int age;
    int id;
    public:
    double height;
};


int main(){
    Human pari;
    pari.height = 100.00;
    //Inaccessble;
    // pari.age = 22;
    // pari.id = 21;
    cout<<"height "<<pari.height<<endl;
}
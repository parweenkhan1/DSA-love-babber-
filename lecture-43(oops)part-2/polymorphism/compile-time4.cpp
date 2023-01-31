//addition of two complex number
#include<iostream>
using namespace std;
class complex{
    private:
    int real,image;
    public:
    //constructor
    complex(int r,int i){
        real = r;
        image = i;
    }
    void operator + (complex & b){
        // complex a;
        real = real+b.real;
        image = image+b.image;
        // return a;
        cout<<real<<" +i"<<image<<endl;
    }
};
int main(){
    complex c1(10,5);
    complex c2(2,4);
    c1+c2;

}
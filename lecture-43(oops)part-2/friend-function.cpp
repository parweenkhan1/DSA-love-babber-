#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    public:
    rectangle(){
        length = 10;
    }
    friend int printlength(rectangle);
};
int printlength(rectangle b){
    b.length +=10;
    return b.length;
}
int main(){
    rectangle b;
    cout<<"length of rectangle "<<printlength(b)<<endl;
    return 0;
}
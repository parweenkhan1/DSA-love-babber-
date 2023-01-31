#include<iostream>
using namespace std;
#define AREA(l,b) (l*b)
int main(){
    int length = 10,breadth = 5,area;
    area = AREA(length,breadth);
    cout<<" The area of rectangle is "<<area<<endl;
    return 0;
}
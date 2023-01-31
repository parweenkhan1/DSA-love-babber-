#include <iostream>
using namespace std;
int main()
{
    int firstvalue = 5, secondvalue = 15;
    char thirdvalue = 'a';
    int *p1 = &firstvalue;  // p1 = address of firstvalue
    int *p2 = &secondvalue; // p2 = address of secondvalue
    char *p3 = &thirdvalue; // p3 = address of thirdvalue
    *p1 = 10;               // value pointed to by p1 = 10
    cout << "A" << firstvalue << endl;

    *p2 = *p1; // value pointed to by p2 = value pointed to by p1
    cout << "B" << secondvalue << endl;

    p1 = p2;  // p1 = p2 (value of pointer is copied)
    *p1 = 20; // value pointed to by p1 = 20
    cout << "A" << firstvalue << endl;
    cout << "B" << secondvalue << endl;
    
    *p3 = 'b'; // value pointed to by p3 = ‘b ’
    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    cout << "thirdvalue is " << thirdvalue << endl;
    return 0;
}
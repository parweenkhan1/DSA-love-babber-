#include<stack>//last in first out concept is used
#include<iostream>
using namespace std;
int main(){
    stack<string> s;
    s.push("Parween");
    s.push("Pari");
    s.push("Paro");
    cout<<"Top element "<<s.top()<<endl;
    s.pop();
    cout<<"After pop Top element "<<s.top()<<endl;
    cout<<"Size of stack "<<s.size()<<endl;
    cout<<"check empty "<<s.empty()<<endl;
}
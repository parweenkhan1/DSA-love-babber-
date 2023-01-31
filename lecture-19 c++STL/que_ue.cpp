#include<iostream>
#include<queue>//first in first out
using namespace std;
int main(){
    queue<string>s;
    s.push("Parween");
    s.push("Pari");
    s.push("Paro");
    cout<<"first element "<<s.front()<<endl;
    s.pop();
    cout<<"After pop first element "<<s.front()<<endl;
    cout<<"size of the queue "<<s.size()<<endl;
}
#include<iostream>//implemeneted using doubly linked list.
//we can access elememt directly,to access a eleent of perticular index we have to traverse through the 
//list.
#include<list>
using namespace std;
int main(){
    list<int> l;
    list<int>L(l);//copying list
    list<int>n(5,100);//5 elements initilizing to 100
    l.push_back(1);
    l.push_front(2);
    cout<<"Before Erase"<<endl;
    for(int i: l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"After Erase"<<endl;
    for(int i: l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list "<<l.size()<<endl;
}
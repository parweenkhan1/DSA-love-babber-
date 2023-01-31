#include<iostream>
#include<set>//element stored in sorted order and all the elements are unique.
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(-1);
    s.insert(4);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<" Erase function"<<endl;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<" count function"<<endl;
    cout<<"check the present "<<s.count(-1)<<endl;
    cout<<"check the present "<<s.count(1)<<endl;
    set<int>::iterator itr = s.find(4);//itr is reference
    cout<<"The index of itr is "<<* itr<<endl;
}
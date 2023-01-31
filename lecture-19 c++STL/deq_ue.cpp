#include<iostream>
#include<deque>
using namespace std;
int main(){

    deque<int> d;
    d.push_front(2);
    d.push_back(1);
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // d.pop_back();//pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    cout<<"Print first elelment "<<d.at(1)<<endl;
    cout << "first element " << d.front() << endl;
    cout << "Last element" << d.back() << endl;
    cout<<"Empty or not "<<d.empty()<<endl;
    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
}
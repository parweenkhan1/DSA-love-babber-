#include <iostream>
#include <queue> //first element is always gretest,follow heap implementation
using namespace std;
int main()
{
    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(4);
    maxi.push(0);
    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    cout<<"mini priority queue"<<endl;
    mini.push(5);
    mini.push(4);
    mini.push(10);
    mini.push(2);
    mini.push(0);
    int m = mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<"check empty "<<mini.size()<<endl;
}
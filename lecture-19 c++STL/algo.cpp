#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"Lower bound-->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound-->"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a = 3,b = 5;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    //reverse(s.begin(),s.end());
    //rotate(starting index,no of rotation,end of the string)
    //sort(v.begin(),v.end());-->intro sort(quick,heap,insertion)
    //
}
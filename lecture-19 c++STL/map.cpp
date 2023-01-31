#include<iostream>
#include<map>//store i key value form,all the are unique.one key is pointed to only one value
using namespace std;
int main(){
    map<int,string> m;
    m[1] = "pari";
    m[2] = "bulbul";
    m[3] = "khan";

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
}
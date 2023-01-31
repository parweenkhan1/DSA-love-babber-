#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string reverse_Phrase(string s){
    //revrse str using inbuilt function
    cout << reverse(s.begin(),s.end());
}
int main(){
    string s = "I like this code";

    string rev = reverse_Phrase(s);
    cout<<rev<<endl;
    return 0;
}
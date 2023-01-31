#include<iostream>
#include<string>
using namespace std;
void reverse_string(string& str,int l,int e){
    if(l>e){
        return;
    }
    swap(str[l],str[e]);
    l++;
    e--;
    reverse_string(str,l,e);
}
int main(){
    string str = "Parween khan";
    reverse_string(str,0,str.length()-1);
    cout<<str;
}
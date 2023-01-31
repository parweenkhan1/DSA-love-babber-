#include<iostream>
#include<string>
using namespace std;
bool palindrom(string str , int i,int j){
    if(i>j)
        return true;
    if(str[i] != str[j]){
        return false;
    }
    else{
        return palindrom(str ,i+1,j-1);
    }
}
int main(){
    string str = "book";
    bool ans = palindrom(str,0,str.length()-1);
    if(ans){
        cout<<"It is a Palindrom"<<endl;
    }
    else{
        cout<<"This is not a Palindrom"<<endl;
    }
}
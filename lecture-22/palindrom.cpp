#include<iostream>
using namespace std;
int valid(char s){
    if((s>'a' && s<'z')||(s>'A' && s<'Z')||(s>0 && s<9)){
        return 1;
    }
    return 0;
}
bool checkPalindrom(string temp){
    string s = temp;
    int i=0,j=temp.size()-1;
    while(i<j){
        swap(temp[i],temp[j]);
        i++;j--;
    } 
    if(s==temp){
        return true;
    }
    return false;
}
int main(){
    string s = "No@----121----on";
    //ignoring spacial charecter 
    string temp= "";
    for(int i=0;i<s.size();i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }

    }
    //to lower-case
    for(int i=0;i<temp.size();i++){
        if(temp[i]>'A' && temp[i]<'Z'){
            temp[i] = temp[i]-'A'+'a';
        }
    }
    bool res = checkPalindrom(temp);
    if(res){
        cout<<"The String is Palindrom"<<endl;
    }
    else{
        cout<<"The string is not Palindrom"<<endl;
    }
}

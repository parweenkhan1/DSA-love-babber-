#include<iostream>
using namespace std;
bool checkPalindrom(string s){
     int left=0,right=s.size()-1;
    while(left<right){
        while(left<right && !isalnum(s[left]))left++;
        while(right>left && !isalnum(s[right]))right--;
        if(tolower(s[left]) != tolower(s[right])){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(){
    string s = "mOO_____@121n%^N-----121////oom";
    bool res = checkPalindrom(s);
   if(res){
        cout<<"The String is Palindrom"<<endl;
    }
    else{
        cout<<"The string is not Palindrom"<<endl;
    }
}
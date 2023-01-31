#include<iostream>
using namespace std;
char getMaxOccCharecter(string s){
    int str[26] = {0};
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int index=0;
        if(ch>='a' && ch<='z'){
            index = ch-'a';
        }
        else{
            index = ch-'A';
        }
        str[index]++;
    }
    int maxi = -1,ans = 0;
    for(int i=0;i<26;i++){
        if(maxi<str[i]){
            maxi = str[i];
            ans = i;
        }
    }

    char maxChar = 'a'+ans;
    return maxChar;
}
int main(){
    string s;
    cin>>s;
    char Max_occ = getMaxOccCharecter(s);
    cout<<Max_occ<<endl;
    return 0;
}
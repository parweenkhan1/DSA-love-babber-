#include<iostream>
#include<vector>
using namespace std;
void sequences(string digits,string output,int index,vector<string>& ans,string * mapp){
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }
    int number = digits[index] - '0';
    string value = mapp[number];
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        sequences(digits,output,index+1,ans,mapp);
        output.pop_back();
    }
}
void solve(string digits,vector<string>& ans){
    string output = "";
    int index = 0;
    string mapp[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    sequences(digits,output,index,ans,mapp);
}
int main(){
    string digits = "456";
    vector<string>ans;
    solve(digits,ans);
    for(int i=0;i<ans.size();i++){
        for(int j = 0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
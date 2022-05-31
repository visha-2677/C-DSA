#include<iostream>
#include<vector>
using namespace std;
void solve(string s,string output,int index,vector<string>& ans){
    //Base case
    if(index >= s.length()){
        if(output.length() > 0){
        ans.push_back(output);
        }
        return ;
    }
    //exclude
    solve(s,output,index+1,ans);
    //include
    char eliment=s[index];
    output.push_back(eliment);
    solve(s,output,index+1,ans);
}
vector<string> subsequences(string s){
    vector<string> ans;
    string output="";
    int index=0;
    solve(s,output,index,ans);
    return ans;
}
void printString(vector<string> s){
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }
}
int main(){
    string s="abc";
    printString(subsequences(s));
    
}
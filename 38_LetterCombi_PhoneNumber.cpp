#include<iostream>
#include<vector>
using namespace std;
void solve(string digits,vector<string>& ans,string output,int index,string mapping[]){
        //Base case
        if(digits.length()<=index){
            ans.push_back(output);
            return ;
        }
        
        int number=digits[index] - '0';
        string valu=mapping[number];
        
        for(int i=0;i<valu.length();i++){
            output.push_back(valu[i]);
            solve(digits,ans,output,index+1,mapping);
            output.pop_back();
        }        
}
vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0){
        return ans;
        }
        string output="";
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,ans,output,index,mapping);
        return ans;
}
void printString(vector<string> s){
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
}
int main(){
    string digit="23";
    
    printString(letterCombinations(digit));
}
#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>>& ans){
    //base case
    if(index>=nums.size()){
        ans.push_back(output);
        return ; 
    }
    //exculde
    solve(nums,output,index+1,ans);
    //include
    int eliment=nums[index];
    output.push_back(eliment);
    solve(nums,output,index+1,ans);
}
vector<vector<int>> subset(vector<int>& nums){
    vector<vector<int>> ans;
    vector<int> output;
    int index=0;
    solve(nums,output,index,ans);
    return ans;
} 
void Print_Vector(vector<vector<int>> a){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    Print_Vector(subset(nums));

}


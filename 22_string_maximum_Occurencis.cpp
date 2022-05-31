#include<iostream>
using namespace std;
char Maximum_Occurencis(string s){
    int a[26]={0};
    //Store in Array Number of Occurencis
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int count=0;
        count=ch-'a';
        a[count]++;
    }
    //Maximum Occurencis Find
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<a[i]){
            ans=i;
            maxi=a[i];
        }
    }
    return 'a'+ans;
}
int main(){
    string a="aellrrrrrr";
    cout<<Maximum_Occurencis(a);
}
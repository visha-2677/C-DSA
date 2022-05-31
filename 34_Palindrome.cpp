// #include<iostream>
// using namespace std;
// bool Palindrome(string s,int i,int j){
//     if(i>j){
//         return true;
//     }
//     if(s[i]==s[j]){
//         return true;
//     }
//     else{
//         return false;
//     }
//     i++;
//     j--;
//     Palindrome(s,i,j);
// }
// int main(){
//     string s="abcddcba";
//     int ans=Palindrome(s,0,s.length()-1);
//     if(ans){
//         cout<<"is a Plindrome"<<endl;
//     }
//     else{
//         cout<<"is Not palindrome"<<endl;
//     }
// }
//
#include<iostream>
using namespace std;
bool Palindrome(string s,int i){
    if(i>(s.length()-1-i)){
        return true;
    }
    if(s[i]==s[s.length()-1-i]){
        return true;
    }
    else{
        return false;
    }
    i++;
    Palindrome(s,i);
}
int main(){
    string s="123321";
    int ans=Palindrome(s,0);
    if(ans){
        cout<<"is a Plindrome"<<endl;
    }
    else{
        cout<<"is Not palindrome"<<endl;
    }
}
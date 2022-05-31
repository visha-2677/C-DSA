// #include<iostream>
// using namespace std;
// void Reverc_String(string& s,int i,int j){
//     if(i>j){
//         return ;
//     }
//     swap(s[i],s[j]);
//     Reverc_String(s,i+1,j-1);
// }
// int main(){
//     string s="vishal";
//     Reverc_String(s,0,s.length()-1);
//     cout<<s<<endl;
// }
//
#include<iostream>
using namespace std;
void Reverc_String(string& s,int i){
    if(i>s.length()-1-i){
        return ;
    }
    swap(s[i],s[s.length()-1-i]);
    Reverc_String(s,i+1);
}
int main(){
    string s="123";
    Reverc_String(s,0);
    cout<<s<<endl;
}
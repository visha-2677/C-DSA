#include<iostream>
using namespace std;
char To_Lowercase(char& a){
    if(a>='a' && a<='z'){
        return a;
    }
    else{
        char temp=a-'A'+'a';
        return temp;
    }
}
//baki che a Use karvanu
bool Check_pelindrom(string a,int n){
    int s=0;
    int e=n-1;
    while(s<=e){   
        if(To_Lowercase(a[s])!=To_Lowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int main(){
    string a="abcBa";
    cout<<Check_pelindrom(a,5);
}
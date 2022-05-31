#include<iostream>
using namespace std;
string replacespace(string a){
    string temp="";
    for(int i=0;i<a.length();i++){
        if(a[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(a[i]);
        }
    }
    return temp;
}
//Not use extra spaces string temp
string replacespace(string a){
    for(int i=0;i<a.length();i++){

    }
}

int main(){
    string a="Visha is hero";
    cout<<replacespace(a);
}
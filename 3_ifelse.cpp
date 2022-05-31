#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"ch : ";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"Capital Latter";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"small Latter";
    }
    // else if(ch>=48 && ch<=57){
    else if(ch>='0' && ch<='9'){
        cout<<"numeric ";
    }
    else{
        cout<<"special charecter";
    }
    return 0;
}
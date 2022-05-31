#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char o;
    cout<<"a =";
    cin>>a;
    cout<<"b =";
    cin>>b;
    cout<<"choose Oprator +,-,* and / : ";
    cin>>o;
    switch(o){
        case '+':
        cout<<a<<"+"<<b<<"="<<a+b<<endl;break;
        case '-':
        cout<<a<<"-"<<b<<"="<<a-b<<endl;break;
        case '*':
        cout<<a<<"*"<<b<<"="<<a*b<<endl;break;
        case '/':
        cout<<a<<"/"<<b<<"="<<a/b<<endl;break; 
        default:
        cout<<"choose wrong caracter";
    }
    return 0;
}
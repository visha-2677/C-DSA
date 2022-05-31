#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    double b=12;
    double *e=&b;
    cout<<"Valu of a:"<<a<<endl;
    cout<<"Valu of a to pointer of p:"<<*p<<endl;
    cout<<"Valu of address a:"<<&a<<endl;
    cout<<"Valu of address a to p pointer:"<<p<<endl;
    cout<<"Valu of address  p pointer:"<<&p<<endl;
    cout<<"size of a"<<sizeof(a)<<endl;
    cout<<"size of pointer"<<sizeof(p)<<endl;
    cout<<"size of pointer"<<sizeof(e)<<endl;

    //Why? 
    // int c=10;
    // int d=c;
    // d++;
    // cout<<c<<endl;
    // cout<<d<<endl;
    // cout<<"Only can change d Not c"<<endl;

    //Than Use Pointer
    int c=10;
    int *d=0;
    d=&c;
    (*d)++;
    cout<<c<<endl;
    cout<<*d<<endl;
    cout<<"Pointing d to c than change c"<<endl;
    cout<<"before d :"<<d<<endl;
    d=d+1;//--> Than Address can Update size of int/cha/double increment 4 byte
    cout<<"after d :"<<d<<endl;
}
#include<iostream>
using namespace std;
int main(){
    // int a[4]={1,2,3,4};
    // cout<<"First eliment Address : "<<a<<endl;
    // cout<<"First eliment Address : "<<&a[0]<<endl;
    // cout<<"First eliment valu : "<<*a<<endl;
    // cout<<"Second eliment valu : "<<*a+1<<endl;
    // cout<<"Second eliment valu : "<<*(a+1)<<endl;
    // cout<<"Second eliment valu : "<<*(a+2)<<endl;
    // cout<<"Second eliment valu : "<<a[2]<<endl;
    
    // //Equvation : a[i]=*(a+i) <---> i[a]=*(i+a)
    // int i=2;
    // cout<<"Second eliment valu : "<<i[a]<<endl;
    // cout<<"Second eliment valu : "<<*(i+a)<<endl;

    // cout<<"First eliment Address"<<endl;
    // cout<<&a[0]<<endl;
    // cout<<&a<<endl;
    // cout<<a<<endl;
    // cout<<"Size of address and eliment"<<endl;
    // cout<<"size of a :"<<sizeof(a)<<endl;
    // cout<<"size of address a[0] :"<<sizeof(&a)<<endl;
    // cout<<"size of valu a[0] :"<<sizeof(*a)<<endl;
    // int *p=&a[0];
    // cout<<&p<<endl;
    // cout<<&*p<<endl;
    // cout<<p<<endl;
    // cout<<"Pointer size :"<<sizeof(p)<<endl;
    // cout<<"Pointer size :"<<sizeof(&p)<<endl;
    // cout<<"valu of a[0] size :"<<sizeof(*p)<<endl;

    int a[10];
    // a=a+1;//Error Not change Location of array
    int *p=&a[0];
    cout<<"after :"<<p<<endl;
    p=p+1;
    cout<<"Before : "<<p<<endl;
}
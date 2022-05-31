#include<iostream>
using namespace std;
int main(){
    // int a[5]={1,2,3,4,5};
    // int *p=&a[0];
    // char ch[6]="abcde";
    // char *p1=&ch[0];
    // cout<<"Address of a[0] :"<<a<<endl;
    // cout<<"Full Char of Array content :"<<ch<<endl;//Becouse of Empimentaion Diffrenc 
    // cout<<"Address of a[0] :"<<p<<endl;
    // cout<<"Full Char of Array content :"<<p1<<endl;//Becouse of Empimentaion Diffrenc

    char temp='z';
    char *p=&temp;
    cout<<p<<endl;//jub tak NULL char nahi milta tab tak print hoga randome 


    // char ch[6]="abcde";
    // char *c="abcde";//☠️YE kabhi nahi karna kyu ki pointer point ch[0] and increment pointer than point read only memory

}
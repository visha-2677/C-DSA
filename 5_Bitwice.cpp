#include<iostream>
using namespace std;
int main(){
    int a=4,b=6;
    //Bit wice oprater
    cout<<"a&b : "<<(a&b)<<endl;
    cout<<"a|b : "<<(a|b)<<endl;
    cout<<"~a  : "<<(~a)<<endl;
    cout<<"a^b : "<<(a^b)<<endl;

    //Left sift and Right sift
    cout<<(17>>1)<<endl; //17/2=8       //Right sift
    cout<<(17>>2)<<endl;//17/2*2=17/4=4
    cout<<(19<<1)<<endl;//19*1*2=38    //Left sift
    cout<<(21<<2)<<endl;//21*2*2=84

    int i=5;
    cout<<(i++)<<endl;
    //5,i=6
    cout<<(++i)<<endl;
    //7,i=7
    cout<<(i--)<<endl;
    //7,i=6
    cout<<(--i)<<endl;
    //5,i=5
    return 0;
}
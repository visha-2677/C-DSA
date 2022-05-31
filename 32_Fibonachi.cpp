#include<iostream>
using namespace std;
int Fibonachi(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return Fibonachi(n-2)+Fibonachi(n-1);
}
int main(){
    //Recursion
    // int n;
    // cin>>n;
    // cout<<Fibonachi(n);
    //for loop use
    int n=10;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++)
    {
        int Nextnumber=a+b;
        cout<<Nextnumber<<" ";
        a=b;
        b=Nextnumber;
    }
    return 0;
}
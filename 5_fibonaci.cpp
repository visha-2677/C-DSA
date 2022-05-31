#include<iostream>
using namespace std;
int main()
{
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
    //0 1 1 2 3 5 8 13 21 34
}
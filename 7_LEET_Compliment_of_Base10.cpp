#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"n :";
    cin>>n;
    int m=n;
    int mask=0;
    while(n!=0)
    {
        mask=(mask<<1) | 1;
        m=m>>1;
    }
    int ans=(~n)&mask;
    cout<<ans;
    
    return 0;
}
#include<iostream>
using namespace std;
// int main()
// {
//     int a,b,ans=1;
//     cin>>a>>b;
//     for(int i=1;i<=b;i++)
//     {
//         ans=ans*a;
//     }
//     cout<<ans;

//     int c,d;
//     ans=1;
//     cin>>c>>d;
//     for(int i=1;i<=d;i++)
//     {
//         ans=ans*c;
//     }
//     cout<<ans;

//     int e,f;
//     ans=1;
//     cin>>e>>f;
//     for(int i=1;i<=f;i++)
//     {
//         ans=ans*e;
//     }
//     cout<<ans;
//     return 0;
// }
int power(){
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main()
{
    cout<<"ans ="<<power();
    return 0;
}
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"n :";
    cin>>n;
    int rim,rev=0;
    while(n!=0){
        rim=n%10;
        rev=rev*10+rim;
        n=n/10;
    }
    cout<<rev;
    return 0;
//     int n;
//     cout<<"n :";
//     cin>>n;
//     int ans=0,rim,i=0;
//     while(1)
//     {
//         rim=n%10;
//         ans=(rim*pow(10,i))+ans;
//         i++;
//     }
//     cout<<ans;
//     return 0;
// }

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // int n,ans;
    // cout << "n :";
    // cin >> n;
    // for (int i = 0; i <= 30; i++)
    // {
    //     ans = pow(2, i);
    //     if (ans == n)
    //     {
    //         cout << "true";
    //     }
    // }

    int ans=1,n;
    cout<<"n :";
    cin>>n;
    for(int i=0;i<=30;i++){  //2^(-31)...2^(31)-1
        if(ans==n){
            cout<<"true";
            exit(0);
        }
        else if(ans!=n) {
            cout<<"false";
            exit(0);
        }
        
        ans=ans*2;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    // //vishal solve program
    // int n;
    // cout<<"n : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n-i+1){
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     int space=2*i-2;
    //     while(space){
    //         cout<<"*"<<" ";
    //         space--;
    //     }
    //     int k=j-1;
    //     while(k>=1){
    //         cout<<k<<" ";
    //         k--;
    //     }
    //     cout<<"\n";
    //     i++;
    // }
    //umang solve program
    int n;
    cin >> n;
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~\nkeep smile :)\nyour pattern was\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    for (int i = n; i >= 1; i--){
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        int stars = 2*n - 2*i;
        for (int j = 1; j <= stars; j++)
            cout << "* ";
        for (int j = i; j >=1; j--)
            cout << j << " ";
        cout << endl;
    }
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
return 0;
}
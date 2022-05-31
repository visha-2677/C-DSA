#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cout<<"sum of all even number n : ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%2==0){
            s+=i;
        }
    }
    cout<<"sum of event number s : "<<s;
    return 0;
}
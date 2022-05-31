#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"n : ";
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n&1;    //7-->(111)&1=1-->1
        ans=(bit * pow(10,i))+ans;//1*10^0-->1+0-->1
        n=n>>1;//(11)
        i++;//i=1
    }
    cout<<ans;

    return 0;
}
#include<iostream>
using namespace std;
//simple solution Not fast
// int simpalePower(int a,int b){
//     int ans=1;
//     for(int i=0;i<b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }
//optimize solution use recursion
int power(int a,int b){
    if(b==0){
        return 1;//2^0=1
    }
    if(b==1){
        return a; //2^1=2
    }
    int ans=power(a,b/2);    
    if(b%2==0){
        return ans*ans; //b is even=a^(b/2)+a^(b/2)
    }
    else{
        return a*ans*ans;//b is odd=a*(a^(b/2)+a^(b/2))
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    // cout<<simpalePower(a,b);
    cout<<power(a,b);
}
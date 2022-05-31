#include<iostream>
using namespace std;
int main(){
    int n,sum=1;
    bool isprime=0;
    cout<<"Enter Number N :";
    cin>>n;
    //1
    // for(int i=1;i<=n;i++){
    //     if(i%2==1){
    //         cout<<"Print Odd Number"<<i<<endl;
    //     }
    // }
    //2
    // for(int i=1;i<=n;i++){
    //     sum=sum*i;
    // }
    // cout<<"Factorial:" <<sum;
    //3
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=1;
            break;
        }
    }
    if(isprime==1){
        cout<<"Is Not Prime Number";
    }
    else{
        cout<<"IS prime Number";
    }
}
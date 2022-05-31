#include<iostream>
#include<vector>
using namespace std;

//complexcity is O(n)
bool isPrimeNumber(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(isPrimeNumber(n)){
        cout<<"is prime Number";
    }
    else{
        cout<<"is Not Prime Number";
    }
}
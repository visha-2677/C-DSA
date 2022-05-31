#include<iostream>
#include<math.h>
using namespace std;
long long int SquarRoot(int n){
    int start=0;
    int end=n-1;
long long int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
long long int squar=mid*mid;
    
    if(squar<n){
        ans=mid;
        start=mid+1;
    }
    else if(squar==n){
        return mid;
    }
    else{
        end=mid-1;
    }
    mid=start+(end-start)/2;
}
return ans;
}


double Morepericision(int n,int pricision,int tempsol){
    double factor=1;
    double ans=tempsol;
    for(int i=0;i<pricision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    // cout<<" Squar Root of n :"<<SquarRoot(n);
    int tempsol=SquarRoot(n);
    cout<<" More prision Squar Root Solution :"<<Morepericision(n,3,tempsol)<<endl;
    cout<<" Internal Function can use :";
    cout<<sqrt(n);
    return 0;
}
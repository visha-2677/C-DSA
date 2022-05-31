#include<iostream>
using namespace std;
int arraysum(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    return sum;
}
int main(){
    int a[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<" array sum is :"<<arraysum(a,n);

    return 0;

}
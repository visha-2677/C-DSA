#include<iostream>
using namespace std;
int UniqeNoarray(int a[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^a[i]; //XOR opratore(^)
    }
    return ans;
}

int main(){
    int a[100];
    int n;
    cout<<" Only select odd Number"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Uniqe No in array : "<<UniqeNoarray(a,n);
    
    return 0;

}
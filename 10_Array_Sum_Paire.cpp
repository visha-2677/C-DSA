#include<iostream>
using namespace std;
int main(){      
    int a[5]={1,2,3,4,5};
    int s;
    cin>>s;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]+a[j]==s){
            cout<<a[i]<<","<<a[j];
            cout<<endl;
            }
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
int getMax(int a[],int n){
    int maxi=INT32_MIN;
    for(int i=0;i<n;i++){
        //c++ in using predifined function
        // maxi=max(maxi,a[i]);
        // No predifined function
        if(a[i]>maxi){
            maxi=a[i];
        }
    }
    return maxi;
}
int getMin(int a[],int n){
    int mini=INT32_MAX;
    for(int i=0;i<n;i++){
        //c++ in using predifined function
        // mini=min(mini,a[i]);
        // No predifined function
        if(a[i]<mini){
            mini=a[i];
        }
    }
    return mini;
}
int main()
{
    int SIZE;
    cin>>SIZE;

    int a[100];
    for(int i=0;i<SIZE;i++){
        cin>>a[i];
    }
    cout<<"max :"<<getMax(a,SIZE)<<endl;
    cout<<"min :"<<getMin(a,SIZE)<<endl;
    return 0;
}
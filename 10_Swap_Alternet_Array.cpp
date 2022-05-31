#include<iostream>
using namespace std;
int AlternetArray(int a[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            //predifined function
            // swap(a[i],a[i+1]);
            //not predifined function
            int s;
            s=a[i];
            a[i]=a[i+1];
            a[i+1]=s;
        }
    }
}
int printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    AlternetArray(a,n);
    printarray(a,n);
    return 0;
}
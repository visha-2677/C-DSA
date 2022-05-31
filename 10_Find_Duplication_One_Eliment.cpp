#include<iostream>
using namespace std;
int DuplicatiONEeliment(int a[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^a[i];
    }
    //
    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    return ans;
}
int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"One duplicatione in array :"<<DuplicatiONEeliment(a,n);
    return 0;

}
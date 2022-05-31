#include<iostream>
using namespace std;
bool Search(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int a[10]={2,24,243,23,53,64,24,25,24,26};
    int key;
    cout<<"Search Eliment in the array"<<endl;
    cin>>key;
    if(Search(a,10,key)){
        cout<<"This eliment is in array";
    }
    else{
        cout<<"This eliment is not in array";
    }
    return 0;
}
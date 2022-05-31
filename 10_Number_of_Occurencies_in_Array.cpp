#include<iostream>
using namespace std;
int NumberofOccurences(int a[],int n,int ar){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==ar){
            count++;
        }
    }
    return count;
}
int searchUniqeOccurences(int ar[],int n){

}
int main(){
    int ar[]={1,2,2,2,2,1};
    for(int i=0;i<5;i++){
        if(ar[i]!=ar[i+1]){
        cout<<NumberofOccurences(ar,6,ar[i]);

    }
    }
    
}
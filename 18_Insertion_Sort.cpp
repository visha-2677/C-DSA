#include<iostream>
using namespace std;
void insertion(int a[],int n){
    for(int i=1;i<n;i++){
        int temp=a[i];
        int j=i-1;
        for(;j>=0;j--){
            if(a[j]>temp){
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        a[j+1]=temp;
    }
}
void printingArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
int main(){
    int a[]={1,2,6,5,4};
    insertion(a,5);
    printingArray(a,5);
}
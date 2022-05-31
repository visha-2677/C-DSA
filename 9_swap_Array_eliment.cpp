#include<iostream>
using namespace std;
int swaparray(int a[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        //predifined function
        // swap(a[start],a[end]);
        // Not predifined
        int s;
        s=a[start];
        a[start]=a[end];
        a[end]=s;
        start++;
        end--;
    }
}
int printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[5]={1,2,3,4,5};
    swaparray(a,5);
    printarray(a,5);
    return 0;
}
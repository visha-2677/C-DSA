#include<iostream>
using namespace std;
int ispossible(int a[],int n,int m,int mid){
    int studentcounter=0;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+a[i]<=mid){
            pagesum+=a[i];
        }
        else{
            studentcounter++;
            if(studentcounter>m || a[i]>mid){
                return false;
            }
            pagesum=a[i];
        }
    }
    return true;
}
int Allocated(int a[],int n,int m){
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int end=sum;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(ispossible(a,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int a[4]={5,5,5,5};
    cout<<" Maximum number of pages assigned to student is maximum : "<<Allocated(a,4,2);
    return 0;
}
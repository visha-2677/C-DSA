#include<iostream>
using namespace std;
int MountainArray(int a[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(a[mid]<a[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int main()
{
    int a[4]={0,2,1,0};//This is the mountain array
    cout<<"Mountain array peak Eliment Index is:"<<MountainArray(a,4);
    return 0;
}
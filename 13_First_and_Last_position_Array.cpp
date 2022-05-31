#include<iostream>
using namespace std;
int FistOccurence(int a[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(a[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key>a[mid]){
            start=mid+1;
        }
        else if(key<a[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int LastOccurence(int a[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(a[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key>a[mid]){
            start=mid+1;
        }
        else if(key<a[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main()
{
    int a[5]={1,2,2,3,4};
    cout<<"First occurence  in array :"<<FistOccurence(a,5,2)<<endl;
    cout<<"Last occurence  in array :"<<LastOccurence(a,5,2)<<endl;
    int Total;
    Total=LastOccurence(a,5,2)-FistOccurence(a,5,2)+1;
    cout<<"Tatal ocuurence :"<<Total;
    return 0;
}
#include<iostream>
using namespace std;
int pivotEliment(int a[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(a[mid]>=a[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int BinarySearch(int a[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(a[mid]==key){
            return mid;
        }
        else if(key>a[mid]){
            start=mid+1;
        }
        else if(key<a[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int PivotArrayinSearchEliment(int a[],int n,int k){
    int pivot=pivotEliment(a,5);
    if((k>=a[pivot]) && (k<=a[n-1])){
        //Bs in second line
        return BinarySearch(a,pivot,n-1,k);
    }
    else{
        // Bs in first line
        return BinarySearch(a,0,pivot-1,k);
    }
}

int main()
{
    int a[5]={7,9,1,2,3};
    // cout<<" Pivot Eliment Index"<<pivotEliment(a,5);
    // cout<<" Search Eliment is :"<<BinarySearch(a,5,2);
    cout<<" Pivot array in eliment Search :"<<PivotArrayinSearchEliment(a,5,2);

    return 0;
}
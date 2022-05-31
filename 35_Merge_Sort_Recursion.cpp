#include<iostream>
using namespace std;
int merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int *first = new int[len1]; 
    int *second = new int[len2]; 

    //copy valu
    int mainArrayIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }

    //merge 2 sorted array
    int index1=0;
    int index2=0;
    mainArrayIndex=s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[mainArrayIndex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++]=second[index2++];
    }
    delete []first;
    delete []second;
}
void Merge_Sort_Recursion(int *arr,int s,int e){
    if(s>=e){
        return ;
    }
    int mid=s+(e-s)/2;

    //leftpart sort karna hai
    Merge_Sort_Recursion(arr,s,mid);

    //Rightepart sort karna hai
    Merge_Sort_Recursion(arr,mid+1,e);

    //merge
    merge(arr,s,e);
}
int printarray(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,34,5,2,3};
    Merge_Sort_Recursion(arr,0,4);
    printarray(arr,5);
}
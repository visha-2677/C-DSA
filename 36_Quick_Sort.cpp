#include<iostream>
using namespace std;
int partition(int *arr,int s,int e){
    int pivot=arr[s];
    int cnt=0;
    //count less number to pivot eliment
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //place pivot eliment in Righte place
    int pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);

    //left and right part ko eliment<pivot and eliment>pivot
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void quicksort(int *arr,int s,int e){
    if(s>=e){
        return ;
    }
    int p=partition(arr,s,e);
    //left part partition
    quicksort(arr,s,p-1);

    //Righte part partition
    quicksort(arr,p+1,e);
}
int printarray(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={3,2,1,4,4};
    quicksort(arr,0,4);
    printarray(arr,5);
}
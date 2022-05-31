#include<iostream>
using namespace std;
int sumArray(int *arr,int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remaningpart=sumArray(arr+1,size-1);
    int sum=arr[0]+remaningpart;
    return sum;
}
int main(){
    int arr[3]={1,2,3};
    cout<<sumArray(arr,3);
}
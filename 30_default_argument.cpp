#include<iostream>
using namespace std;
void print(int arr[],int n,int start=0){//use default argument in start=0 mean start valu not call than usr start=0 automatically 
    for(int i=start;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[4]={1,2,3,4};
    print(arr,4);//start de na hai to varna mat de
    print(arr,4,1);
}
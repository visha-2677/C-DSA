#include<iostream>
using namespace std;
void print(int *arr,int s,int e){
    for(int i=s;i<e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool Binary_Search(int *arr,int s,int e,int key){
    // print(arr,s,e);//samjne ke liae
    int mid=s+(e-s)/2;
    if(s==0 && e==0){
        return false;
    }
    if(s>e){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]>key){
        bool remainingLeftepart=Binary_Search(arr,s,mid-1,key);
        return remainingLeftepart;
    }
    else{
        bool remainingRightpart=Binary_Search(arr,mid+1,e,key);
        return remainingRightpart;
    }
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int ans=Binary_Search(arr,0,6,2);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"Not present"<<endl;
    }
}
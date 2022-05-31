#include<iostream>
using namespace std;
void print(int *arr,int n){
    cout<<endl<<"Size of array is : "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
bool Linear_Search_Recursion(int *arr,int key,int size){
    // print(arr,size);//samjne ke liae
    if(size==0){
        return false; 
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingPart=Linear_Search_Recursion(arr+1,key,size-1);
        return remainingPart;
    }
}
int main(){
    int arr[4]={1,2,3,4};
    bool ans=Linear_Search_Recursion(arr,3,4);
    if(ans){
        cout<<"Array in present eliment"<<endl;
    }
    else{
        cout<<"Array in NOT present eliment"<<endl;
    }
}
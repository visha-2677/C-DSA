#include<iostream>
using namespace std;
int BinarySearch(int a[],int n,int key){
    int start=0;
    int end=n-1;
    // int mid=(start+end)/2;
    //chalaki formula intger ki rang ko kam karne ke liye star=2^31-1 se end=2^31-1 hai is liye
    int mid=start+(end-start)/2;
    while(start<=end){
        if(a[mid]==key){
            return mid;
        }
        if(key>a[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
return -1;
}
int main()
{
    int a[5]={1,2,3,4,5};
    int s=BinarySearch(a,5,7);
    cout<<s;
    return 0;

}
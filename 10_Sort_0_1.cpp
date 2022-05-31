#include<iostream>
using namespace std;
int printgarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
int Sort01(int a[],int n){
    int left=0,right=n-1;
    while(left<right){
        while(a[left]==0 && left<right){
            left++;
        }
        while(a[right]==1 && left<right){
            right--;
        }
        //a[left]==1 and a[right]==0 than
        if(left<right)
        {
            swap(a[left],a[right]);
            left++;
            right--;
        }
    }

}
int main()
{
    int a[5]={1,0,1,0,1};
    Sort01(a,5);
    printgarray(a,5);
return 0;
}
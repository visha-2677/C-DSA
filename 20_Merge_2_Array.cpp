#include<iostream>
#include<vector>
using namespace std;
int Merge_Array(int a[],int n,int b[],int m,int c[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            k++;
            i++;
        }
        else{
            c[k]=b[j];
            k++;
            j++;
        }
    }
    //Baki eliment ko a[] me reh gaye hai
    while(i<n){
        c[k]=a[i];
        k++;
        i++;
    }
    //Baki eliment ko b[] me reh gaye hai
    while(j<m){
        c[k]=b[j];
        k++;
        j++;
    }

}

void Print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[4]={1,3,4,5};
    int b[3]={2,6,7};
    int c[7]={0};
    Merge_Array(a,4,b,3,c);
    Print(c,7);

}
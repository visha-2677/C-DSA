#include<iostream>
using namespace std;
int* SelactionSort(int a[],int n){
    for(int i=0;i<n;i++)
    {
        int indexmin=i; 
        for(int j=i+1;j<n;j++){

            if(a[j]<a[indexmin]){
                indexmin=j;
            }

        }
        swap(a[indexmin],a[i]);
    }
    return a;
}
int main()
{
    int a[]={1,2,4,5,3};
    //tction sort : " <<SelactionSort(a,5);
    int *arr = SelactionSort(a,5);


    for (int i=0; i<5; i++)
    {
        cout << arr[i] ;
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
bool Binary_Search_2dArray(vector<vector<int>> a,int key){
    int row=a.size();
    int col=a[0].size();
    int start=0;
    int end=row*col-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        int eliment=a[mid/col][mid%col];
        if(eliment==key){
            return 1;
        }
        if(eliment<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return 0;
}
void Print_Vector(vector<vector<int>> a){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    //only Row can Sorted
     vector<vector<int>> a
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    // a[0][0]=1;
    // a[0][1]=2;
    // a[0][2]=3;
    // a[1][0]=4;
    // a[1][1]=5;
    // a[1][2]=6;
    // a[2][0]=7;
    // a[2][1]=8;
    // a[2][2]=9;
    Print_Vector(a);
    cout<<Binary_Search_2dArray(a,9);
}
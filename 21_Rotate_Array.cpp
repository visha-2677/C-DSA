#include<iostream>
#include<vector>
using namespace std;
void Rotate_Array(vector<int>& a,int k){
    vector<int> temp(a.size());
    for(int i=0;i<a.size();i++){
        temp[(i+k)%a.size()]=a[i];
    }
    a=temp;
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }
}
void Print_Vector(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    Rotate_Array(a,2);
    Print_Vector(a);
}
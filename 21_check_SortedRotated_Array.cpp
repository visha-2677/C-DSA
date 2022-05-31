#include<iostream>
#include<vector>
using namespace std;
bool Sorted_Rotated_Array(vector<int> & a){
    int n=a.size();
    int count=0;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            count++;
        }
    }
    if(a[n-1]>a[0]){
        count++;
    }
    return count<=1;
}
int main(){
    vector<int> a;
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(1);
    a.push_back(2);
    // a.push_back(6);
    cout<<Sorted_Rotated_Array(a);
}
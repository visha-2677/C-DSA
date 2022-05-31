#include<iostream>
#include<vector>
using namespace std;
void Move_zeros(vector<int>& a){
    int Nonzero=0;
    for(int i=0;i<a.size();i++){
        if(a[i]!=0){
            swap(a[i],a[Nonzero]);
            Nonzero++;
        }
    }
    cout<<endl;
    cout<<"after Moveing zeros"<<endl;
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
    a.push_back(0);
    a.push_back(1);
    a.push_back(0);
    a.push_back(4);
    Print_Vector(a);
    Move_zeros(a);
    Print_Vector(a);
    
   
}
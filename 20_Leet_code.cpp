#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse_vectore(vector<int> a){
    int s=0,e=a.size()-1;
    while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    return a;
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
    Print_Vector(a);
    cout<<endl;
    vector<int> ans=reverse_vectore(a);
    Print_Vector(ans);


}
#include<iostream>
#include<vector>
using namespace std;
void Print_Vector(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
vector<int> Reverce(vector<int> a){
    int s=0;
    int e=a.size()-1;
    while(s<=e){
        swap(a[s++],a[e--]);
    }
    return a;
}
vector<int> Sum_Of_Two_Array(vector<int> a,int n,vector<int> b,int m){
    vector<int> ans;
    int i=n-1;
    int j=m-1;
    int carry=0;
    while(i>=0 && j>=0){
        int val1=a[i];
        int val2=b[j];
        int sum=val1+val2+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    //First case
    //1 2 3 
    //    4
    //-------
    //1 2 7
    while(i>=0){
        int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }

    //Second case
    //     4
    // 1 2 3
    //-------
    // 1 2 7
    while(j>=0){
        int sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }

    //Second case
    //  9 1 1
    //  1 2 3
    //-------
    //1 0 3 4
    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    return Reverce(ans);
}



int main(){
    vector<int> a;
    a.push_back(9);
    a.push_back(1);
    a.push_back(1);
    Print_Vector(a);

    cout<<endl;

    vector<int> b;
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);
    Print_Vector(b);
    cout<<endl;
    cout<<"--------"<<endl;
    vector<int> ans=Sum_Of_Two_Array(a,3,b,3);
    Print_Vector(ans);
}
#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    //---> Array

    // int a[]={2,3,4,5,6};
    // array<int,4> a={1,2,3,4};
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<endl;
    // }
    // cout<<"2 nd eliment "<<a.at(2)<<endl;
    // cout<<"array is Empty?"<<a.empty()<<endl;
    // cout<<"Fist eliment"<<a.front()<<endl;
    // cout<<"lasr eliment"<<a.back()<<endl;

    //---> vector
    // vector<int> a;
    // vector<int> v(5,1);
    // vector<int> copy1(v);
    // for(int i:copy1){
    //     cout<<i<<endl;
    // }
    // for(int i:v){
    //     cout<<v[i]<<endl;
    // }
    // cout<<a.capacity()<<endl;
    // a.push_back(1);
    // a.push_back(2);
    // a.push_back(3);
    // a.push_back(4);
    // cout<<a.capacity()<<endl;
    // cout<<a.size()<<endl;
    // cout<<"2nd eliment"<<a.at(2)<<endl ;
    // cout<<a.front()<<endl;
    // cout<<a.back()<<endl;

    // cout<<"before pop"<<endl;
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<endl;
    // }
    // a.pop_back();
    // cout<<"After pop"<<endl;
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<endl;
    // }
    // cout<<"before size"<<a.size()<<endl;
    // a.clear();
    // cout<<"After size"<<a.size()<<endl;

    //---> deque
    // deque<int> a;
    // a.push_back(1);
    // a.push_back(2);
    // a.push_back(3);
    // a.push_front(0);
    // a.push_front(-1);
    // cout<<a.size()<<endl<<endl;
    // for(int i:a){
    //     cout<<i<<endl;
    // }
    // cout<<a.at(2)<<endl;
    // cout<<a.front()<<endl;
    // cout<<a.back()<<endl;
    // cout<<"Empty or Not"<<a.empty()<<endl;
    // cout<<"Erase before size"<<a.size()<<endl;
    // a.erase(a.begin(),a.begin()+1);
    // cout<<"Erase after size"<<a.size()<<endl;
    // for(int i:a){
    //     cout<<i<<endl;
    // }

    //---> dobly linked list
    // list<int> a;
    // a.push_back(3);
    // a.push_front(2);
    // a.push_front(1);
    // for(int i:a){
    //     cout<<i<<endl;
    // }
    // a.erase(a.begin());
    // cowadw wadw ut<<"After erase"<<endl;
    // for(int i:a){
    //     cout<<i<<endl;
    // }
    //Not rendome exess mean a.at(3) 
    // cout<<a.at(1);//error

    //---> stack
    // stack<string> a;
    // a.push("Vishal");
    // a.push("Kachndi");
    // a.push("Dokari");
    // a.push("Huklakdi");
    // cout<<"Top eliment : "<<a.top()<<endl;
    // a.pop();
    // cout<<"Top eliment : "<<a.top()<<endl;
    // cout<<"size of stack : "<<a.size()<<endl;
    // cout<<"Empty or Not : "<<a.empty()<<endl;

    //---> queue
    // queue<string> a;
    // a.push("VIshal");
    // a.push("kachndi");
    // a.push("Singodo");
    // a.push("dokari");
    // cout<<"First eliment : "<<a.front()<<endl;
    // a.pop();
    // cout<<"First eliment : "<<a.front()<<endl;
    // cout<<"size of : "<<a.size()<<endl;

    //prority_queue
    // priority_queue<int> Maxi;
    // priority_queue<int,vector<int>,greater<int>> Min;

    // Maxi.push(2);
    // Maxi.push(3);
    // Maxi.push(1);
    // Maxi.push(0);
    // cout<<"top eliment :"<<Maxi.top()<<endl;
    // cout<<Maxi.size()<<endl;
    // int n=Maxi.size();
    // for(int i=0;i<n;i++){
    //     cout<<Maxi.top()<<endl;
    //     Maxi.pop();
    // }
    // cout<<endl;

    // Min.push(2);
    // Min.push(3);
    // Min.push(1);
    // Min.push(0);
    // cout<<"top eliment :"<<Min.top()<<endl;
    // cout<<Min.size()<<endl;
    // int m=Min.size();
    // for(int i=0;i<m;i++){
    //     cout<<Min.top()<<endl;
    //     Min.pop();
    // }
    // cout<<endl;
    // cout<<"Empty or Not"<<Min.empty();

    //---> set
    // set<int> a;
    // a.insert(5);
    // a.insert(5);
    // a.insert(5);
    // a.insert(1);
    // a.insert(1);
    // a.insert(0);
    // a.insert(6);
    // for(int i:a){
    //     cout<<i<<endl; //Only one time print Number and Sorted Order to print
    // }
    // // a.erase(a.begin());
    // set<int>::iterator it=a.begin();
    // it++;
    // a.erase(it);
    // cout<<"erase after "<<endl;
    // for(int i:a){
    //     cout<<i<<endl; //Only one time print Number and Sorted Order to print
    // }
    // cout<<"-5 is present or Not : "<<a.count(-5)<<endl;
    // set<int> ::iterator itr=a.find(5);
    // for(auto i=itr;i!=a.end();i++){
    //     cout<<*i<<endl;//Print 5 to all n numbers
    // }

    //--->map
    // map<int,string> a;
    // a[1]="Huklakadi";
    // a[2]="Singodo";
    // a[13]="Kachndi";
    // // a[5]="Tindolo";
    // a.insert({5,"Tindolo"});
    // cout<<"Before erase"<<endl;
    // for(auto i:a){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<"finding -1 : "<<a.count(-1)<<endl;
    // cout<<"after erase"<<endl;
    // a.erase(1);
    // for(auto i:a){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // auto it=a.find(5);
    // for(auto i=it;i!=a.end();i++){
    //     cout<<(*i).first<<endl;
    // }

    //---> Normaly Use
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(13);
    a.push_back(8);
    cout<<"Finding 13 : "<<binary_search(a.begin(),a.end(),13)<<endl;
    cout<<"Finding 14 : "<<binary_search(a.begin(),a.end(),14)<<endl;

    cout<<"Lower bound"<<lower_bound(a.begin(),a.end(),13)-a.end()<<endl;
    cout<<"Upper bound"<<upper_bound(a.begin(),a.end(),13)-a.end()<<endl;

    int c=3;
    int b=90;
    cout<<"Max : "<<max(c,b)<<endl;
    cout<<"Min : "<<min(c,b)<<endl;
    swap(b,c);
    cout<<" b : "<<b<<endl;

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"Reverce Order : "<<abcd<<endl;

    rotate(a.begin(),a.begin()+1,a.end());
    cout<<"after rotate"<<endl;
    for(int i:a){
        cout<<i<<endl;
    }
    cout<<"after Sorting"<<endl;
    sort(a.begin(),a.end());//we can build to use Quick,Heap and Insertion Sort can use
    for(int i:a){
        cout<<i<<endl;
    }
}
#include<iostream>
using namespace std;
void reverc(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(a[s++],a[e--]);
    }
}
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char a[40];
    cout<<"Enter Your Name : ";
    cin>>a;
    // a[2]='\0';
    cout<<"Your Name is : ";
    cout<<a;
    int L=getLength(a);
    cout<<endl<<"Length : "<<L<<endl;
    reverc(a,L);
    cout<<a;
}
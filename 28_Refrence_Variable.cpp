#include<iostream>
using namespace std;

int update1(int a){
    a++;
}
int update2(int& a){
    a++;
}
int& update3(int a){
    int i=a;
    int& ans=i;
    return ans;  //💀💀Bad Practice Because of local variable i and ans valu is death to close the function
}
int* func(int a){
    int* ptr=&a;
    return ptr;  //💀💀Bad Practice
}
int main(){
    // int i=20;
    // int& j=i;//Refrence variable 
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;

    //Function
    // int a=10;
    // cout<<"Before "<<a<<endl;
    // update1(a);               //copy of the variable a
    // cout<<"after "<<a<<endl;  //Becouse of Pass/Call By valu

    // int b=10;
    // cout<<"Before "<<b<<endl;
    // update2(b);               //Refrence of the variable b
    // cout<<"after "<<b<<endl;  //Becouse of Pass/Call By Refrence 

    // cout<<update3(b)<<endl;//💀💀Bad Practice
    // cout<<func(b)<<endl;   //💀💀Bad Practice

    int n;
    cin>>n;  
    int a[n];
    //💀💀Bad Practice Becouse of array can initialize to the Run time 
    //Stack memory is smoll and Heap memory is large
    //initialize array size to the program than stack memory is mentain
    //NOT initialize mean initialize run time and stack memory Not mentain at runtime 
    //Becouse of Program is CRASH than it is called //💀💀Bad Practice

    int n;
    cin>>n;
    int* arr=new int[n];
    //😊😊👍Good Practice Becouse of array can initialize Daynamic Memory
    //Heap in memory can initialize Memory can Run time 
}
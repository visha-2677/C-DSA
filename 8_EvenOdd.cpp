#include<iostream>
using namespace std;
bool isEven(int a){
    //odd
    if(a&1){
        return 0;
    }
    //even
    else{
        return 1;
    }
}
int main(){

    int a;
    cin>>a;
    if(isEven(a)){
        cout<<"number is Even";
    }
    else{
        cout<<"number is odd";
    }
    return 0;

}
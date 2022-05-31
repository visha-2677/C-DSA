#include<iostream>
using namespace std;
void N_number(int n){
    if(n==0) return ;
    // cout<<n<<endl; //tialer up
    N_number(n-1);
    cout<<n<<endl; //tialer down
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    N_number(n);
}
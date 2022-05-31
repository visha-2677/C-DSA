#include<iostream>
using namespace std;
int main(){
    int n,rim;
    cout<<"n : ";//123=(1*2*3)-(1+2+3)=0, 234=(2*3*4)-(2+3+4)=15
    cin>>n;
    int pro=1;
    int sum=0;
    for(int i=0;n!=0;i++){
        rim=n%10;
        pro=pro*rim;
        sum=sum+rim;
        n=n/10;
    }
    int answer=pro-sum;
    cout<<answer;

    return 0;
    
}
// #include<iostream>
// using namespace std;
// int main(){
//     int n,rim=0;
//     cout<<"n : ";
//     cin>>n;
//     for(int i=0;n!=0;i++){
//         rim=rim*10+n%10;   
//         n=n/10;
//     }
//     cout<<rim;
//     return 0;
// }

#include<iostream>
using namespace std;
#define PI 3.14;
#define AREA(a,b) (a*b)
#define ELE 1, \
            2, \
            3
#define min(a, b) (((a) < (b)) ? (a) : (b))
int global=1111;      //global variable use all function and main fuction and all program in 
                      //Most Probably NOt use global variable becouse diffrent function in change valu of gloable variable
                      //than change reflact in all function
                      //use refrence variable

inline int getMax(int& a,int& b){ //use inline function becouse of one line code can execute
    return (a>b) ? a : b;         //automatically in main function Not call after read function 
}                                 //code can optimize and fast 
//2 and 3 line code in inline function complier will desicied function can run of not
//>3 line complier Not run inline function 
int main(){
    int r=10;
    // double pi=3.14;
    // pi=pi+1;  //Change Valu of pi
    // double area= PI ;
    // PI =PI +1;//NOt change
    // cout<<area<<endl;

    // int a=10,b=11,area;
    // area=AREA(a,b);
    // cout<<area<<endl;

    // int arr[]={ELE};
    // cout<<"ELiment of array"<<endl;
    // for(int i=0;i<3;i++){
    //     cout<<arr[i]<<" ";
    // }

    // int a = 18;
    // int b = 12;
 
    // cout << "Minimum value between"
    //      << a << " and " << b
    //      << " is: " << min(a, b);

    //Local and gloabal variable
    // int i=19;//local variable for main function
    // {
    //     int i=20;      //local variable for {} 
    //     cout<<i<<endl;
    // }
    // cout<<i<<endl;

    //inline function
    int a=10,b=12;
    int ans=0;
    // ans=(a>b) ? a : b; automatically replace in ans use inline function
    ans=getMax(a,b);
    cout<<ans<<endl;

    a=a+4;
    b=b+1;
    // ans=(a>b) ? a : b; automatically replaceqsq in ans use inline function
    ans=getMax(a,b);
    cout<<ans<<endl;
}
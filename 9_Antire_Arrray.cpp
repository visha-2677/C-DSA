#include<iostream>
using namespace std;
int array(int a[],int SIZE){
    for(int i=0;i<SIZE;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int first[10]={3,32,32,34,323,34,2};
    array(first,10);
    int second[11];
    second[0]=1;
    second[1]=12;
    second[2]=13;
    second[3]=14;
    cout<<endl;
    array(second,4);

    return 0;
}
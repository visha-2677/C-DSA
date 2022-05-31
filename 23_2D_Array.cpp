#include<iostream>
using namespace std;

int LargestSumRow(int a[][4],int n,int m){
    int maxi=INT16_MIN;
    int rowIndex=-1;

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=a[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=i;
        }
    }
    cout<<"Maximum sum is :"<<maxi<<endl;
    return rowIndex;
}
void sumRow(int a[][4],int n,int m){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=a[i][j];
        }
        cout<<sum<<endl;
    }
}

void sumCol(int a[][4],int n,int m){
    for(int j=0;j<m;j++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i][j];
        }
        cout<<sum<<endl;
    }
}
bool iseliment(int a[][4],int n,int m,int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    // int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
// int a[3][4];
    // cout<<"Enter Eliment"<<endl;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>a[i][j];
    //     }
    // }

    cout<<"Printing Row vies Array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    // cout<<"Printing Col vies Array"<<endl;
    // for(int j=0;j<4;j++){
    //     for(int i=0;i<3;i++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int target;
    cout<<"Search Eliment"<<endl;
    cin>>target;
    if(iseliment(a,3,4,target)){
        cout<<"eliment is found"<<endl;
    }
    else{
        cout<<"eliment is NOt fount "<<endl;
    }
    sumRow(a,3,4); 
    cout<<endl;
    sumCol(a,3,4);
    int ans=LargestSumRow(a,3,4);
    cout<<"Largest Row Sum : "<<ans<<endl;

}
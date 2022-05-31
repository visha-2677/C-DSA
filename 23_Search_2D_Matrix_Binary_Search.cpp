#include<iostream>
#include<vector>
using namespace std;
bool Binary_Search_2dArray(vector<vector<int>> a,int key){
    int row=a.size();
    int col=a[0].size();
    int rowIndex=0;
    int colIndex=col-1;
    //Beacuse of start with comparison with [0][4] than compar with targate/key
    while(rowIndex<row && colIndex>=0){
        int eliment=a[rowIndex][colIndex];
        if(eliment==key){
            return 1;
        }
        if(eliment<key){
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    return 0;
}
void Print_Vector(vector<vector<int>> a){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    //all row and col Sorted
     vector<vector<int>> a
    {
        {1 , 4 ,7 ,11 ,15},
        {2 ,5 ,8 ,12 ,19},
        {3 ,6 ,9 ,16 ,22}
    };
    // a[0][0]=1;
    // a[0][1]=2;
    // a[0][2]=3;
    // a[1][0]=4;
    // a[1][1]=5;
    // a[1][2]=6;
    // a[2][0]=7;
    // a[2][1]=8;
    // a[2][2]=9;
    Print_Vector(a);
    cout<<Binary_Search_2dArray(a,22);
}
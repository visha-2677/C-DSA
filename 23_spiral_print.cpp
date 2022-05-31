#include<iostream>
#include<vector>
using namespace std;
vector<int> Spiral_matrix(vector<vector<int>>& a){
    vector<int> v;
    int row=a.size();
    int col=a[0].size();
    int count=0;
    int total=row*col;

    //Intialization Index
    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingCol=col-1;

    while(count<total){
        //print starting row
        for(int i=startingCol;count<total && i<=endingCol;i++){
            v.push_back(a[startingRow][i]);
            count++;
        }
        startingRow++;

        //print ending col
        for(int i=startingRow;count<total && i<=endingRow;i++){
            v.push_back(a[i][endingCol]);
            count++;
        }
        endingCol--;

        //print ending row
        for(int i=endingCol;count<total &&i>=startingCol;i--){
            v.push_back(a[endingRow][i]);
            count++;
        }
        endingRow--;

        //print starting col
        for(int i=endingRow;count<total &&i>=startingRow;i--){
            v.push_back(a[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return v;
}
// void Input_2d_array(int a[][3],int n,int m){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
// }

// void Print_2d_array(int a[][3],int n,int m){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
void Print_Vector(vector<vector<int>> a){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Print_Vector(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    // int a[3][3];
    // Input_2d_array(a,3,3);
    // Print_2d_array(a,3,3);
    vector<vector<int>> a
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
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
    vector<int> b=Spiral_matrix(a);
    Print_Vector(b);   
}
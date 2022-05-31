#include<iostream>
using namespace std;
//2D Array Daynamically Allocation
//int** arr = new int*[row];
// for(int i=0;i<row;i++){
//    arr[i] = new int[col];
// } 
//Internally :
//(1) new int*[row]
// int* type N row pointer in Heap/Daynamic Memory
// BOX 1 --> int* row1
// BOX 2 --> int* row2
//       -->
//        .
//       -->
// BOX n --> int* rowN
//than store n pointer in Daynamically in static Memory
//in Double pointer (int** arr)
//
//(2) for(int i=0;i<row;i++){
//    arr[i] = new int[col];
// }
//Internally :
//        BOX 1(col)      BOX 2(col)    BOX N(col)
//                     
// BOX 1 --> int* row1 ............... int* rowN
// BOX 2 --> int* row2 ............... int* rowN
//       -->                -->
//        .                  .
//       -->                -->
// BOX n --> int* rowN ............... int* rowN
//for loop in i th row = new int[col] n col initiallize in Daynamic Memory 
int main(){
    int row;
    cin>>row;

    int col;
    cin>>col;

    //creation Of 2d array in Daynamically
    int** arr= new int*[row];
    for(int i=0;i<row;i++){
        arr[i]= new int[col];
    }

    //input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    //output
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //relesing Memory
    //First N col Reles
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }
    //second N row Reles
    delete []arr;
}
#include<iostream>
using namespace std;
void print_Array(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    // int n;
    // cin>>n;  
    // int a[n];
    //💀💀Bad Practice Becouse of array can initialize to the Run time 
    //Stack memory is smoll and Heap memory is large
    //initialize array size to the program than stack memory is mentain
    //NOT initialize mean initialize run time and stack memory Not mentain at runtime 
    //Becouse of Program is CRASH than it is called //💀💀Bad Practice
    //Normaly stack in (int arr[5]) 5 * 4 = 20 byte  

    // int n;
    // cin>>n;
    // int* arr=new int[n];
    //😊😊👍Good Practice Becouse of array can initialize Daynamic Memory
    //Heap in memory can initialize Memory can Run time 
    //(int* arr) in stack 32 in 4 and 64 in 8 byte
    //(new int[5]) in Heap 5 * 4= 20 byte
    //Total 32 in 4 + 20 = 24 byte and 64 in 8 + 20 = 28 byte 

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // print_Array(arr,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // char ch;
    // char* ch=new char;
    //(char* ch) is pointer mean allocation stack Memory 32 in 4 and 64 in 8 byte
    //new char  is Dynamic Memory allocation in Heap char 1 byte
    //TOTAL Memory 32 in 4+1=5 byte and 64 in 8+1=9 byte

    while(true){
        int n=8;//Statically Memory allocation than ATTOMETICALLY deallocation Memory  
    }
    while(true){
        int* ptr=new int;//Daynamically Memory allocation than NOT ATTOMETICALLY deallocation Memory use delete Key world 
        // delete []arr; //in array case
        delete(ptr);
    }                    //only (int* ptr) mean pointer can deallocation Becouse of static Memory

}
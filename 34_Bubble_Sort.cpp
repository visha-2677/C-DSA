#include <iostream>
using namespace std;
void simple_Bubble_Sort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        bool swapisdone = false;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapisdone = true;
            }
        }
        if(swapisdone==false){
            //alrady sorted
            break;
        }
    }
}

//use Recursion
void Recursion_Bubble_Sort(int *arr,int size){
    if(size==0 || size==1){
        return ;
    }
    //1 case solve kar diya largest eliment ko last me rakh diya
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    Recursion_Bubble_Sort(arr,size-1);
}
int printarray(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5]={1,10,3,9,6};
    // simple_Bubble_Sort(arr,5);
    Recursion_Bubble_Sort(arr,5);
    printarray(arr,5);
    
}
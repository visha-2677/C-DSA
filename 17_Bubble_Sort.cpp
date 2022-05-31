#include <iostream>
using namespace std;
int* Unsortedarray(int a[], int n)
{
        for (int i = 1; i < n; i++)
        {
            // Round 1 to n-1
            int swapped=false;  //best case complexcity (B)
            for (int j = 0; j < n - i; j++)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                    swapped=true;//B
                }
            }
            if(swapped==false){ //B
                break;
            }//B
        }
    return a;   
}
int main()
{
    int a[5]={1,4,2,5,7};
    int *arr=Unsortedarray(a,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }

    return 0;
}
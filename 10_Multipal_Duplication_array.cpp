#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,1,4,5,5};
    int b[5]={1,1,3,4,5};
    int c[5];

    int k=0;
    for(int i=0; i<5; i++)
    {
        int count=-1;
        for(int j=0; j<5; j++)
        {
            if(a[i]==b[j])
            {
                count++;
            }
        }
        if(count>0)
        {
            c[k] = a[i];
            k++;
        }
    }
    
    cout<<"print" <<endl;

    for(int i=0; i<k; i++)
    {
        cout<<c[i]<<" ";
    }

}
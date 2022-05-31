#include<stdio.h>
int main()
{
    int n,s=1;
    printf("n =");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        s*=(n-i);
    }
    printf("s =%d",s);
    return 0;
}
#include<stdio.h>   
int main()
{
    int n,s=0;
    printf("N =");
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        s+=i;
    }
        printf("%d\n",s);
    return 0;
}
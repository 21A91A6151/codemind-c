#include<stdio.h>
int main()
{
    int T,n,arr[100],i,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&T);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=T)
        {
            k=k+1;
        }
        else
        {
            k=k+2;
        }
    }
    printf("%d",k);
    return 0;
}
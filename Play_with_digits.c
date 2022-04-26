#include<stdio.h>
int main()
{
    int n,arr[100],temp,a,i,b,c=0,k,s=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            s=s+d;
        }
    }
    printf("%d",s);
    return 0;
}
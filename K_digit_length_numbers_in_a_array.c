#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,arr[100],i,j=0,d,c=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        arr[i]=abs(arr[i]);
        c=0;
        if(arr[i]==0)
        {
            c=1;
        }
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            c+=1;
        }
        if(c==k)
        {
            j+=1;
        }
    }
    printf("%d ",j);
}
#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[1000],i,j,a,c=0,k=0,d,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
          temp=arr[i];
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            c++;
        }
        if(temp==0)
        {
            c++;
        }
        printf("%d ",c);
    }
    return 0;
}
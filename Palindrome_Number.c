#include<stdio.h>
int main()
{
    int n,arr[100],i,d,k=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        k=0;
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            k=k*10+d;
        }
        if(k==temp)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}
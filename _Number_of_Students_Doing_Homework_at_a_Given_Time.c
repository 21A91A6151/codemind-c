#include<stdio.h>
int main()
{
    int m,n,i,j,a[100],b[100],c=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]<=x and b[i]>=x)
        {
            c+=1;
        }
    }
    printf("%d",c);
}
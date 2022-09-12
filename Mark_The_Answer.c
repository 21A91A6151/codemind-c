#include<stdio.h>
int main()
{
    int n,i,j,m,a[100],c=0,k=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(k==2)
        {
            break;
        }
        if(m>=a[i])
        {
            c+=1;
        }
        else
        {
            k+=1;
        }
    }
    printf("%d",c);
}